//
// Created by Kevin Duraj on 2/16/16.
//

#ifndef CASSANDRA_CPP_QUERYCQL_H
#define CASSANDRA_CPP_QUERYCQL_H

#include <iosfwd>
#include <string>
#include <cassandra.h>
using namespace std;

class QueryCQL {

public:

    QueryCQL() { }
    void execute(const char *Host, const char *CQL, const int num_column);
    void print_column(const CassValue *col1);

};


#endif //CASSANDRA_CPP_QUERYCQL_H
