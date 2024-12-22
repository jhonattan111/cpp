#include <iostream>

using std::cout;
using std::endl;

void printCharacteres(const char*);

int main() {
    char string[] = "imprime os caracteres de uma string";

    cout << "O string é: ";
    printCharacteres(string); 
    cout << endl;

    return 0;
}

void printCharacteres(const char *sPtr) {
    for(; *sPtr != '\0'; sPtr++) {
        cout << *sPtr;
    }
}