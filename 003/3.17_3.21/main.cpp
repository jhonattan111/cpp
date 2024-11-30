#include <iostream>

using std::cout;
using std::endl;

int main() {

    int x = 3;
    int &y = x;

    //cout << "O valor de x é " << x << endl;
    //cout << "O valor de y é uma referência ao valor de " << y << endl;

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7;
    cout << "x = " << x << endl << "y = " << y << endl;

    return 0;
}