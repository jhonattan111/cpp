#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <iomanip>

using std::setw;

int get_input();
void function1(int);
void function2(int);
void function3(int);

int main() {
    void (*f[3])(int) = {function1, function2, function3};
    int choice;
    choice = get_input();

    while(choice != 3) {
        (*f[choice])(choice);
        choice = get_input();
    }

    return 0;
}

int get_input() {
    char input;
    cout << "Digite um número entre 0 e 2, 3 para terminar: ";
    cin >> input;

    int ipt = (int)(input - '0');

    if(ipt < 0 || ipt > 3) {
        cout << "Você digitou um número inválido. Tente novamente." << endl;
        return get_input();
    }

    return ipt;
}

void function1(int a) {
    cout << "Você digitou " << a << " de modo que function1 foi chamada" << endl;
}

void function2(int b) {
    cout << "Você digitou " << b << " de modo que function2 foi chamada" << endl;
}

void function3(int c) {
    cout << "Você digitou " << c << " de modo que function3 foi chamada" << endl;
}