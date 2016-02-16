#include <iostream>
#include "NLP.h"

using namespace std;

int main() {
    cout << "C++ for Cassandra" << endl;

    NLP * nlp = new NLP();
    nlp->count_words("Kevin Thomas Duraj");
    return 0;
}