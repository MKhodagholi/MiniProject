#include "Dictionary.h"
#include <string>
#include <iostream>

using namespace std;


void showMenu(){
    cout << "1) Add word with synonyms into Dictionary\n";
    cout << "2) Remove word with synonyms\n";
    cout << "3) Remove word's synonyms\n";
    cout << "4) Search word with synonyms\n";
    cout << "5) Show word with synonyms\n";
    cout << "6) change dictation of words\n";
    cout << "7) Save\n";
    cout << "8) Read File\n";
    cout << "9) Exit";
}



Words* creatWord(string name){
    Words *temp = new Words{move(name), nullptr, nullptr};
    return temp;
}


void addWordWithSynonyms(string name, Words *Head) {
    Words *temp = new Words;
    temp = Head;
    Words *word = creatWord(name);
    while (temp->nex != nullptr){
        temp = temp->nex;
    }
    temp->nex = word;

}