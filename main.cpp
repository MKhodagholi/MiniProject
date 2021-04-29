#include <iostream>
#include <string>
#include "Dictionary.h"

using namespace std;

int main() {

    Words *Head;
    Head->nex = nullptr;
    int num;

    addWordWithSynonyms(Head);

    do{
        showMenu(); // this func is for showing Menu of Program
        cout << endl;
        cin >> num;

        switch (num) {
            case 1: // Add word with synonyms into Dictionary
            addWordWithSynonyms(Head);
                break;

            case 2: // Remove word with synonyms
                break;

            case 3:
                break;

            case 4: // Search word with synonyms
                break;

            case 5: // Show word with synonyms
                break;

            case 6:
                break;

            case 7:
                break;

            case 8:
                break;

            case 9:
                break;
        }
    } while(num != 9);
}
