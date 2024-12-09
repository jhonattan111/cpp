#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int a;
    int *aPtr;
    a = 7;
    aPtr = &a;

    cout    << "O endereço de 'a' é: " << &a << endl
            << "O valor de aPtr é " << aPtr;

    cout << endl << endl;
    
    cout    << "O valor de 'a' é " << a << endl
            << "O valor de *aPtr é " << *aPtr;

    cout << endl << endl;

    cout    << "Mostrando que * e & são os inversos um do outro" << endl
            << "&*aPtr = " << &*aPtr << endl
            << "*&aPtr = " << *&aPtr << endl;

    return 0;
}