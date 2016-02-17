#include <iostream>
#include "QueryCQL.h"
#include "Schema.h"


void display_schema();

using namespace std;

int main(int argc, char* argv[]) {

    if (argc < 3) {
        cout << "Usage: " << std::endl;
        cout << "./cassandra_cpp 192.168.1.159 \"select * from  engine.link limit 30\" 2" << std::endl;
        return 1;

    } else {

        cout << "Starting C++ for Cassandra Demo" << endl << endl;
        QueryCQL *cql = new QueryCQL();

        int num_columns = 0;
        if(argv[3]) num_columns = atoi(argv[3]);
        else num_columns = 1;
        cql->execute(argv[1], argv[2], num_columns);
    }

    return 0;
}

void display_schema() {
    Schema * schema = new Schema();
    schema->display_schema();
    delete schema;
}

