#include "Dictionary.h"
#include <string>
#include <iostream>

using namespace std;

struct Node{
    string str_input;
    Node *nex;
};

void Dictionary::addWordWithSynonyms() {
    string wordWithSynonyms;
    getline(cin, wordWithSynonyms);
}