#define PI 3.14159265359
#define MEIO_CIRCULO 180

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>

using std::ceil;
using std::cos;
using std::exp;
using std::fabs;
using std::floor;
using std::fmod;
using std::log;
using std::log10;
using std::pow;
using std::sin;
using std::sqrt;
using std::tan;

template<class T>
double grausParaRadianos(T grau);

int main() {
    int n1 = 13;
    double d1 = 223.2324;
    char c1 = 't';


    cout    << "Ceil: " << ceil(d1) << endl
            << "Floor: " << floor(d1) << endl 
            << endl
            << "Sin: " << sin(grausParaRadianos(30)) << endl
            << "Cos: " << cos(grausParaRadianos(30)) << endl
            << "Tan: " << tan(grausParaRadianos(30)) << endl
            << endl
            << "Log: " << log(30) << endl
            << "Log10: "<< log10(30) << endl
            << endl
            << "Raiz Quadrada: " << sqrt(9) << " " << sqrt(3)
            << endl
            << "Valor absoluto: " << fabs(-123) << endl
            << "Potência: " << pow(12, 3) << endl;
    return 0;
}

template<class T>
double grausParaRadianos(T grau) {

    return grau * static_cast<double>(PI / MEIO_CIRCULO);
}