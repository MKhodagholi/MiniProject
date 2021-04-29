#ifndef MINIPROJECT_1400_02_10_DICTIONARY_H
#define MINIPROJECT_1400_02_10_DICTIONARY_H
#include <iostream>

using namespace std;


struct Words{
    string wordWithSynonym;
    words *nex;
    words *syno;
};

void addWordWithSynonyms();

words* creatWord(string name);

void removeWordWithSynonyms();

void removeSynonymsOfWord();

void searchWordWithSynonyms();

void showWordWithSynonyms();

void changeDictationOfWords();



#endif //MINIPROJECT_1400_02_10_DICTIONARY_H
