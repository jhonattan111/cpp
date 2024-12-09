#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

int binarySearch(const int[], int, int, int, int);
void printHeader(int);
void printRow(const int[], int, int, int, int);

int main() {
    const int arraySize = 15;
    int a[arraySize], key, result;

    for(int i = 0; i < arraySize; i++) {
        a[i] = 2 * i;
    }

    cout << "Digite un número entre 0 e 28: ";
    cin >> key;
    result = binarySearch(a, key, 0, arraySize -1, arraySize);

    if(result != -1) {
        cout << endl << key << " encontrado no elemento do array " << result << endl;
    } else {
        cout << endl << key << " não encontrado";
    }   

    return 0;
}

int binarySearch(const int b[], int searchKey, int low, int high, int size) {
    int middle;
    while(low <= high) {
        middle = (low + high) /2;

        printRow(b, low, middle, high, size);

        if(searchKey == b[middle]) return middle;
        else if (searchKey < b[middle]) high = middle - 1;
        else low = middle + 1;
    }

    return -1;
}

void printHeader(int size) {
    int i;

    cout << endl << "Subscritos" << endl;
    for(i = 0; i < size; i++) {
        cout << setw(3) << i << ' ';

        cout << endl;

        for(i = 1; 1 <= 4 * size; i++) {
            cout << '-';
        }

        cout << endl;
    }
}

void printRow(const int b[], int low, int mid, int high, int size) {
    for(int i = 0; i < size; i++) {
        if(i<low || i > high) cout << setw(4);
        else if (i == mid) cout << setw(3) << b[i] << '*';
        else cout << setw(3) << b[i] << ' ';
    }

    cout << endl;
}