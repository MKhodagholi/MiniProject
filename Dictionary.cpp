#include "Dictionary.h"
#include <string>
#include <iostream>

using namespace std;


void showMenu(){
    cout << "1) Add Word\n";
    cout << "2) Remove Word\n";
    cout << "3) Remove Word's synonyms\n";
    cout << "4) Search\n";
    cout << "5) Show Word\n";
    cout << "6) change dictation of words\n";
    cout << "7) Save\n";
    cout << "8) Read File\n";
    cout << "9) Exit";
}



Words* creatWord(string name){
    Words *temp = new Words{move(name), nullptr, nullptr};
    return temp;
}


void addWordWithSynonyms(Words *Head) {
    cout << "Enter the Word: ";
    string name;
    cin >> name;
    Words *temp = new Words;
    temp = Head;
    Words *word = new Words;
    word = creatWord(name);
    while (temp->nex != nullptr){
        temp = temp->nex;
    }
    temp->nex = word;
    cout << "How many you want to add synonyms of \"" << name << "\"? ";
    int num;
    cin >> num;
    string synonyms[num];
    cin >> name;
    stringToArray(name, synonyms, num);
    for (int i = 0; i < num; i++){
        cout << synonyms[i] << endl;
    }
/*    for (int i = 0; i < num; i++){
        string syno;
        getline(cin, syno);
        Words *temp1 = new Words;
        temp1 = creatWord(syno);
        temp1 = temp1->nex;
        temp1->syno = NULL;
        temp1->nex = nullptr;
    }*/
}

void stringToArray(string str, string ans[], int size){
    string str_making;
    int count = 0;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' '){
            count++;
            str_making = "";
        }
        else {
            ans[count] += str[i];
        }
    }
}