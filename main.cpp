#include <iostream>
#include "QueryCQL.h"
#include "Schema.h"


void display_schema();

using namespace std;

int main() {

    cout << "Starting C++ for Cassandra Demo" << endl << endl;
    QueryCQL * cql = new QueryCQL();
    cql->execute("192.168.1.159", "url", "select * from  engine.link limit 30");

    return 0;
}

void display_schema() {
    Schema * schema = new Schema();
    schema->display_schema();
    delete schema;
}

