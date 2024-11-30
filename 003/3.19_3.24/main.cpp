#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setprecision;

const double PI = 3.14159265358979;

int main() {

    const float PI = static_cast<float>(::PI);

    cout    << setprecision(20)
            << "Valor local float PI = " << PI << endl
            << "Valor global double de PI = " << ::PI << endl;
    
    return 0;
}