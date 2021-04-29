#include "Dictionary.h"
#include <string>
#include <iostream>

using namespace std;

Words* creatWord(string name){
    Words *temp = new Words{move(name), nullptr, nullptr};
    return temp;
}


void addWordWithSynonyms(Words word, Words *Head) {
    Words *temp = new Words;
    temp = Head;
}