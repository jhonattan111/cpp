#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main() {
    const int arraySize = 11;
    int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 2, 45, 37 };
    int i, hold;

    cout << "Itens de dados na ordem original" << endl;

    for(int i = 0; i < arraySize; i++) {
        cout << setw(4) << a[i];
    }

    for(int pass = 0; pass <arraySize - 1; pass++) {
        for(int i = 0; i < arraySize - 1; i++) {
            if(a[i] > a[i + 1]) {
                hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        }
    }

    cout << endl << "Itens de dados em ordemascendente" << endl;

    for(i = 0; i < arraySize; i++) {
        cout << setw(4) << a[i];
    }

    cout << endl;

    return 0;
}

void tryToModifyArray(const int b[]) {
    // POR SER UM TIPO CONSTANTE, E COM UMA CHAMADA POR REFERÊNCIA, 
    // NÃO É POSSÍVEL MODIFICAR ESTE ARRAY
    
    // b[0] /= 2;
    // b[1] /= 2;
    // b[2] /= 2;    
}