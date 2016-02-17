//
// Created by Kevin Duraj on 2/16/16.
//

#ifndef CASSANDRA_CPP_QUERYCQL_H
#define CASSANDRA_CPP_QUERYCQL_H

#include <iosfwd>
#include <string>

class QueryCQL {

public:

    QueryCQL() { }
    void execute(const char *Host, const char *Col1, const char *CQL);
};


#endif //CASSANDRA_CPP_QUERYCQL_H
