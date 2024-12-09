#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printArray(int[][3]);
int main() {
    int array1[2][3] = {{1,2,3},{4,5,6}},
        array2[2][3] = {1,2,3,4,5},
        array3[2][3] = {{1,2}, {4}};

    cout << "Valores em array1 por linha: " << endl;
    printArray(array1);

    cout << "Valores em array2 por linha: " << endl;
    printArray(array2);

    cout << "Valores em array3 por linha: " << endl;
    printArray(array3);

    return 0;
}

void printArray(int a[][3]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << a[i][j] << ' ';
        }

        cout << endl;
    }
}