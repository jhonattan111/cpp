#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <iomanip>

using std::setw;

unsigned long fibonacci(unsigned long);

int main() {
    unsigned long number, result;

    cout << "Digite um inteiro: ";
    cin >> number;
    result = fibonacci(number);
    cout << "Fibonacci (" << number << ") = " << result << endl;

    return 0;
}

unsigned long fibonacci(unsigned long n) {
    if ( n == 0 || n == 1) return n;
    else return fibonacci ( n - 1) + fibonacci ( n - 2);
}