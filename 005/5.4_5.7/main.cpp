#include <iostream>

using std::cout;
using std::endl;

void cubeByReference(int*);

int main() {

    int number = 5;

    cout    << "O valor original de number é " << number << endl;
    cubeByReference(&number);
    cout    << "O novo valor de number é " << number << endl;
    return 0;
}

void cubeByReference(int *number_ptr) {
    *number_ptr = *number_ptr *  *number_ptr * *number_ptr;
}