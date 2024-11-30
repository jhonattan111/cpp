#include <iostream>

using std::cout;
using std::endl;

void a (void);
void b (void);
void c (void);

int x = 1; //Variável global

int main() {
    int x = 5; //variavel local de main

    cout << "x local no escopo externo de main é " << x << endl;

    // novo escopo
    {
        int x = 7;

        cout << "x local no escopo interno de main é " << x << endl;
    }

    cout << "x local no escopo externo de main é " << x << endl;

    a();
    b();
    c();
    a();

    return 0;
}

void a (void) {
    int x = 25;

    cout << endl << "x local em 'a' é " << x << " depois de entrar em 'a'" << endl;

    x++;

    cout << endl << "x local em 'a' é " << x << " antes de sair de 'a'" << endl;
}

void b (void) {
    static int x = 25;

    cout << endl << "x local `estatic` em 'b' é " << x << " ao entrar em 'b'" << endl; 
    x++;

    cout << endl << "x local `static` em 'b' é " << x << " antes de sair de 'b'" << endl;
}

void c (void) {
    cout << endl << "x global em 'c' é " << x << " ao entrar em 'c'" << endl; 
    x *= 10;

    cout << endl << "x global em 'c' é " << x << " ao sair de 'c'" << endl;
}