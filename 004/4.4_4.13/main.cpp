#include <iostream>

using std::cout;
using std::endl;

void staticArrayInit(void);
void automaticArrayInit(void);

int main() {
    
    cout << "Primeira chamada para cada função: " << endl;
    staticArrayInit();
    automaticArrayInit();
    cout << endl << endl;

    cout << "Segunda chamada para cada função: " << endl;
    staticArrayInit();
    automaticArrayInit();    

    return 0;
}

void staticArrayInit(void) {
    static int array1[3];
    int i;

    cout << endl << "Valores ao entrar em staticArrayInit: " << endl;

    for(i = 0; i < 3; i++) 
    {
        cout << "array1[" << i << "] = " << array1[i] << " " << endl; 
    }    

    cout << endl << "Valores ao sair de staticArrayInit: " << endl;

    for(i = 0; i < 3; i++) 
    {
        cout << "array1[" << i << "] = " << (array1[i] += 5) << ' ' << endl;
    }    
}

void automaticArrayInit(void) {
    int i, array2[3] = { 1, 2, 3 };

    cout << endl << "Valores ao entrar em automaticArrayInit: " << endl;

    for(i = 0; i < 3; i++) 
    {
        cout << "array2[" << i << "] = " << array2[i] << ' ' << endl;
    }    

    cout << endl << "Valores ao sair de automaticArrayInit: " << endl;

    for(i = 0; i < 3; i++) 
    {
        cout << "array2[" << i << "] = " << (array2[i] += 5) << ' ' << endl;
    }    
}