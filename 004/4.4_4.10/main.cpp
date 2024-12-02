#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

int main() {
    const int arraySize = 10;
    int n[arraySize] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };

    cout << "Elemento" << setw(13) << "Valor" << setw(17) << "Histograma" << endl;

    for(int i = 0; i < arraySize; i++) {
        cout << setw(7) << i << setw(13) << n[i] << setw(9);

        for(int j = 0; j < n[i]; j++) {
            cout << '*';
        }

        cout << endl;
    }


    

    return 0;
}