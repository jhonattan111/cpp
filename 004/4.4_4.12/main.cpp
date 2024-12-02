#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char string1[20], string2[] = "string constante";

    cout << "Digite um string: ";
    cin >> string1;

    cout    << "string1 é: " << string1 << endl
            << "string2 é: " << string2 << endl
            << "string1 com espaços entre os caracteres é: " << endl;

    for(int i = 0; string1[i] != '\0'; i++) {
        cout << string1[i] << ' ';
    } 

    cin >> string1;
    cout << endl << "string1 é: " << string1 << endl;

    cout << endl;

    return 0;
}