#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template<class T>
T maximum(T value1, T value2, T value3);

int main() {
    int int1, int2, int3;

    cout    << "Forneça três valores inteiros: ";
    cin     >> int1  >> int2 >> int3;

    cout    << "O maior valor inteiro é " 
            << maximum(int1, int2, int3) << endl;


    double double1, double2, double3;
    cout    << "Forneça três valores double: ";
    cin     >> double1  >> double2 >> double3;

    cout    << "O maior valor double é " 
            << maximum(double1, double2, double3) << endl;

    char char1, char2, char3;

    cout    << "Forneça três valores char: ";
    cin     >> char1  >> char2 >> char3;

    cout    << "O maior valor char é " 
            << maximum(char1, char2, char3) << endl;
}

template<class T>
T maximum(T value1, T value2, T value3) {
    T max = value1;

    if (value2 > value1) {
        max = value2;
    }

    if (value3 > max) {
        max = value3;
    }

    return max;
}