/*
 * Mostre o valor de x após cada um dos comandos seguintes ser executado:
 * a) x = fabs(7.5)
 * b) x = floor(7.5)
 * c) x = fabs(0.0)
 * d) x = ciel(0.0)
 * e) x = fabs(-6.4)
 * f) x = ceil(-6.4)
 * g) x = ceil(-fabs(-8+floor(-5.5))) 
 */

#include <iostream>

using std::cout;
using std::endl;

#include <cmath>

using std::fabs;
using std::floor;
using std::ceil;

int main() {

    float x;

    x = fabs(7.5);
    cout << "fabs(7.5) = " << x << endl;
    
    x = floor(7.5);
    cout << "floor(7.5) = " << x << endl;
    
    x = fabs(0.0);
    cout << "fabs(0.0) = " << x << endl;

    x = ceil(0.0);
    cout << "ceil(0.0) = " << x << endl;

    x = fabs(-6.4);
    cout << "fabs(-6.4) = " << x << endl;

    x = ceil(-6.4);
    cout << "ceil(6.4) = " << x << endl;

    x = ceil(-fabs(-8+floor(-5.5)));
    cout << "ceil(-fabs(-8+floor(-5-5))) = " << x;


    return 0;
}