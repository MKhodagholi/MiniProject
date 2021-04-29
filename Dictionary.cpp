#include "Dictionary.h"
#include <string>
#include <iostream>

using namespace std;

struct Node{
    string wordWithSynonym;
    Node *nex;
    Node *syno;
};

void addWordWithSynonyms(string wordWithSynonyms, Node *Head) {
    Node *temp = new Node;
    temp = Head;
}