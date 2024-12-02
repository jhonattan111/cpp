#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main() {
    const int arraySize = 10;
    int j, s[arraySize];

    for(int j = 0; j < arraySize; j++) {
        s[j] = 2 + 2 * j;
    }

    cout << "Elemento" << setw(13) << "Valor" << endl;

    for(j = 0; j < arraySize; j++) {
        cout << setw(8) << j << setw(13) << s[j] << endl;
    }

    return 0;
}