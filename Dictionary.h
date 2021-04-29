#ifndef MINIPROJECT_1400_02_10_DICTIONARY_H
#define MINIPROJECT_1400_02_10_DICTIONARY_H
#include <iostream>

using namespace std;


struct Words{
    string wordWithSynonym;
    Words *nex;
    Words *syno;
};

void showMenu();

void addWordWithSynonyms(Words *Head);

Words* creatWord(string name);

void stringToArray(string str, string ans[], int size);

void removeWordWithSynonyms();

void removeSynonymsOfWord();

void searchWordWithSynonyms();

void showWordWithSynonyms();

void changeDictationOfWords();



#endif //MINIPROJECT_1400_02_10_DICTIONARY_H
