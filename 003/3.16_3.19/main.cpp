#include <iostream>

using std::cout;
using std::endl;
using std::cin;

inline double cube(const double s) {
    return s * s * s;
}

int main() {
    cout << "Digite o comprimento do lado do seu cubo: ";
    double side;
    cin >> side;
    cout << "Volume do cubo com lado " << side << " é " << cube (side) << endl;
    
    return 0;
}