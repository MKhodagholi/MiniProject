#include "Dictionary.h"
#include <string>
#include <iostream>

using namespace std;

struct words{
    string wordWithSynonym;
    words *nex;
    words *syno;
};

words* creatWord(string name){
    words* temp = new words{std::move(name), nullptr, nullptr};
    return temp;
}


void addWordWithSynonyms(string wordWithSynonyms, words *Head) {
    words *temp = new words;
    temp = Head;
}