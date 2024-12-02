#include <iostream>

using std::cout;
using std::endl;

int main() {
    const int arraySize = 12;
    int a[arraySize] = {
        1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45
    };

    int total = 0;
    for(int i = 0; i < arraySize; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
        total += a[i];
        cout << total << endl;
    }

    cout << "A soma dos valores dos elementos do array é " << total << endl;

    return 0;
}