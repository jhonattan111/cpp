#include <iostream>

using std::cout;
using std::endl;

void tryToModifyArray(const int[]);

int main() {
    int a[] = { 10, 20, 30 };

    tryToModifyArray(a);

    cout << a[0] << ' ' << a[1] << ' ' << a[2] << endl;

    return 0;
}

void tryToModifyArray(const int b[]) {
    // POR SER UM TIPO CONSTANTE, E COM UMA CHAMADA POR REFERÊNCIA, 
    // NÃO É POSSÍVEL MODIFICAR ESTE ARRAY
    
    // b[0] /= 2;
    // b[1] /= 2;
    // b[2] /= 2;    
}