#define PI 3.14159265359
#define MEIO_CIRCULO 180

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>

using std::pow;

template<class T>
inline double sphereVolume(T &radius);

int main() {
    double radius;

    cout    << "Insira o raio da esfera: ";
    cin     >> radius;

    cout    << "O volume da esfera é de " << sphereVolume(radius);

    return 0;
}

template<class T>
double sphereVolume(T &radius) {
    return static_cast<double>(4/3) * PI * pow(radius, 3);
}