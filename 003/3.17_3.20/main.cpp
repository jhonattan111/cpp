#include <iostream>

using std::cout;
using std::endl;

int squareByValue(int);
void squareByReference (int &);

int main() {

    int x = 2, z = 4;

    cout    << "x = " << x << " antes de squareByValue\n"
            << "Valor retornado por squareByValue: "
            << squareByValue(x) << endl
            << "x = " << x << " depois de squareByValue\n" << endl;

    cout    << "z = " << z << " antes de squareByReference\n";

    squareByReference(z);

    cout    << "x = " << x << " depois de squareByReference\n" << endl;

    return 0;
}

int squareByValue(int a) {
    return a *= a;
}

void squareByReference(int &cRef) {
    cRef *= cRef;
}