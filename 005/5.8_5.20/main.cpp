#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

#include <iostream>

using std::cout;
using std::endl;

int main() {
    int b[] = { 10, 20, 30, 40 };
    int *bPtr = b;

    cout << "Array impresso com notação de subscrito de array " << endl;

    for(int i = 0; i < 4; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }

    cout << "Notação de ponteiro/deslocamento onde o ponteiro é o nome do array" << endl;

    for( int offset = 0; offset < 4; offset++) {
        cout << "*(b + " << offset << ") = " << *(b+offset) << endl;
    }

    cout << "Notação de ponteiro subscrito" << endl;
    for(int i = 0; i < 4; i ++ ) {
        cout << "bPtr[" << i << "] = " << bPtr[i] << endl;
    }

    cout << "Notação ponteiro/deslocamento" << endl;
    for(int offset = 0; offset < 4; offset++) {
        cout << "*(bPtr + " << offset << ") = " << *(bPtr + offset) << endl;
    }
    
    return 0;
}

