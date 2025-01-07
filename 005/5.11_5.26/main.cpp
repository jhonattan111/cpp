#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <iomanip>

using std::setw;

void bubble(int[], const int, bool (*)(int, int));
bool ascending(int, int);
bool descending(int, int);

int main() {
    const int array_size = 10;
    int order, counter, a[array_size] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    cout << "Digite 1 para classificação em ordem ascendente " << endl
    << "Digite 2 para classificação em ordem descendente ";

    cin >> order;

    cout << endl << "Elementos do array em ordem original" << endl;

    for(counter = 0; counter < array_size; counter++)
        cout << setw(4) << a[counter];

    if(order == 1) {
        bubble(a, array_size, ascending);
    } else {
        bubble(a, array_size, descending);
    }

    cout << endl << "Elementos em ordem classificada" << endl;

    for(counter = 0; counter < array_size; counter++)
        cout << setw(4) << a[counter];


    cout << endl;
    return 0;
}

void bubble(int work[], const int size, bool (*compare)(int, int)) {
    void swap(int * const, int * const);

    for (int pass = 1; pass < size; pass++) {
        for(int count = 0; count < size -1 ; count++) {
            if((*compare) (work[count], work[count + 1]))
                swap(&work[count], &work[count + 1]);
        }
    }
}

void swap(int * const element1_ptr, int * const element2_ptr) {
    int hold = *element1_ptr;
    *element1_ptr = *element2_ptr;
    *element2_ptr = hold;
}

bool ascending(int a, int b) {
    return a > b;
}

bool descending(int a, int b) {
    return a < b;
}