#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void function1();
void function2(void);

int main() {
    unsigned long number, result;

    function1();
    function2();
    return 0;
}

void function1() {
    cout << "function1 não recebe argumentos" << endl;
}

void function2(void) {
    cout << "function2 também não recebe argumentos" << endl;
}