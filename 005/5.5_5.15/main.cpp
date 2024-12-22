#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

void bubblesort( int *, const int);

int main() {

    const int arraySize = 10;
    int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Items de dados na ordem original" << endl;

    for(int i = 0; i < arraySize; i++) {
        cout << setw(4) << a[i];
    }

    bubblesort(a, arraySize);

    cout << endl << "Itens de dados em ordem ascendente." << endl;

    for (int i = 0; i < arraySize; i++) {
        cout << setw(4) << a[i];
    }

    return 0;
}

void bubblesort(int *array, const int size ) {
    void swap(int * const, int * const);

    for(int pass = 0; pass < size; pass++) {
        for(int j = 0; j < size - 1; j++) {
            if(array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void swap(int * const element1Ptr, int * const element2Ptr) {
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}