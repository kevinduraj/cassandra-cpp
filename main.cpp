#include <stdio.h>
#include <cassandra.h>
#include <iostream>
#include "NLP.h"
#include "Schema.h"

void process_nlp();

using namespace std;

int main() {

    cout << "Starting C++ for Cassandra Demo" << endl << endl;

    Schema * schema = new Schema();
    schema->display_schema();
    delete schema;

    return 0;
}

/**
 * Natural Language Processing
 */
void process_nlp() {
    NLP *nlp = new NLP();
    nlp->count_words("Kevin Thomas Duraj");
    delete nlp;
}