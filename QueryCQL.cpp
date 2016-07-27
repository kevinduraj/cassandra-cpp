//
// Created by Kevin Duraj on 2/16/16.
//

#include <ostream>
#include <iostream>
#include <stdio.h>
#include "QueryCQL.h"

void QueryCQL::print_column(const CassValue *col1) {

    const char *value_name;
    size_t value_length;
    cass_value_get_string(col1, &value_name, &value_length);
    printf("|%.*s", (int) value_length, value_name);

}

void QueryCQL::execute(const char *Host, const char *CQL, const int num_column) {

    /* Setup and connect to cluster */
    CassFuture *connect_future = NULL;
    CassCluster *cluster = cass_cluster_new();
    CassSession *session = cass_session_new();

    cass_cluster_set_contact_points(cluster, Host);
    connect_future = cass_session_connect(session, cluster);

    if (cass_future_error_code(connect_future) == CASS_OK) {
        CassFuture *close_future = NULL;

        CassStatement *statement = cass_statement_new(CQL, 0);
        CassFuture *future = cass_session_execute(session, statement);

        if (cass_future_error_code(future) == CASS_OK) {

            /* Retrieve result set and iterate over the rows */
            const CassResult *result = cass_future_get_result(future);
            CassIterator *rows = cass_iterator_from_result(result);

            int counter = 1;
            while (cass_iterator_next(rows)) {

                const CassRow *row = cass_iterator_get_row(rows);
                //const CassValue *value = cass_row_get_column_by_name(row, Col1);

                printf("%i", counter++);
                for (int i = 0; i < num_column; i++) {
                    const CassValue *col1 = cass_row_get_column(row, i);
                    print_column(col1);
                }

                cout << endl;
            }

            cass_result_free(result);
            cass_iterator_free(rows);

        } else {

            /* Handle error */
            const char *message;
            size_t message_length;
            cass_future_error_message(future, &message, &message_length);
            fprintf(stderr, "Unable to run query: '%.*s'\n", (int) message_length, message);
        }

        cass_statement_free(statement);
        cass_future_free(future);

        /* Close the session */
        close_future = cass_session_close(session);
        cass_future_wait(close_future);
        cass_future_free(close_future);

    } else {

        /* Handle error */
        const char *message;
        size_t message_length;
        cass_future_error_message(connect_future, &message, &message_length);
        fprintf(stderr, "Unable to connect: '%.*s'\n", (int) message_length, message);

    }

    cass_future_free(connect_future);
    cass_cluster_free(cluster);
    cass_session_free(session);

}
