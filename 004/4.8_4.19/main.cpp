#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int linearSearch(const int[], int, int);

int main() {
    const int arraySize = 100;
    int a[arraySize], searchKey, element;

    for(int i = 0; i < arraySize; i++) {
        a[i] = 2 * i;
    }

    cout << "Digite a chave de pesquisa, valor inteiro" << endl;
    cin >> searchKey;
    element = linearSearch(a, searchKey, arraySize);

    if(element != -1) {
        cout << "Valor encontrado no elemento " << element << endl;
    } else {
        cout << "Valor não encontrado";
    }   

    return 0;
}

int linearSearch(const int array[], int key, int sizeOfArray) {
    for(int i = 0; i < sizeOfArray; i++) {
        if(array[i] == key)
            return i;
    }

    return -1;
}