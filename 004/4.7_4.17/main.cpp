#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;
using std::setiosflags;
using std::setprecision;

void mean(const int[], int);
void median(const int[], int);
void mode(int[], int[], int);
void bubblesort(int[], int);
void printArray(const int[], int);

int main() {
    const int responseSize = 99;
    int frequency[10] = { 0 }, 
    response[responseSize] = {
        6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7
    };

    mean(response, responseSize);
    median(response, responseSize);
    mode(frequency, response, responseSize);

    return 0;
}

void mean(const int answer[], int arraySize) {
    int total = 0;
    cout << "**********" << "Média" << "**********" << endl;

    for(int j = 0; j < arraySize; j++) {
        total += answer[j];
    }

    cout    << "A média é o valor médio dos itens de dados."
            << "A média é igual à soma de todos os itens de dados "
            << "dividido pelo número de itens de dados ("
            << arraySize << "). O valor médio para este caso é: "
            << total << " / " << arraySize << " = "
            << setiosflags(std::ios::fixed | std::ios::showpoint)
            << setprecision(4)
            << static_cast<double>(total) / arraySize << endl << endl;
}

void median(const int answer[], int arraySize) {
    cout    << "*********" << "Mediana" << "*********" << endl
            << "O array de respostas não ordenado é ";

    printArray(answer, arraySize);

    cout    << endl << endl << "A mediana é o elemento " << arraySize / 2
            << " do array ordenado de " << arraySize << " elementos."
            << " Para este caso a mediana é " << answer[arraySize/2] << endl << endl;
}

void mode(int freq[], int answer[], int size) {
    int rating, largest = 0, modeValue = 0;

    cout << endl << "**********" << "Moda" << "**********" << endl;

    for(rating = 1; rating <= 9; rating++) {
        freq[rating] = 0;
    }

    for(int j = 0; j < size; j++) {
        ++freq[answer[j]];
    }

    cout    << "Resposta" << setw(11) << "Frequencia"
            << setw(19) << "Histograma" << endl << endl
            << setw(55) << "1 1 2 2" << endl << setw(56)
            << "5 0 5 0" << endl << endl;

    for (rating = 1; rating <= 9; rating++) {
        cout << setw(8) << rating << setw(11) << freq[rating] << setw(10);

        if (freq[rating] > largest) {
            largest = freq[rating];
            modeValue = rating;
        }

        for(int h = 1; h <= freq[rating]; h++) {
            cout << '*';
        }

        cout << endl;

        cout << "A moda é o valor mais frequente." << endl << "Para este caso a moda é " << modeValue << " que ocorreu " << largest << " vezes." << endl;
    }
}

void bubblesort(int a[], int size) {
    int hold;

    for(int pass = 1; pass < size; pass++) {
        for(int j = 0; j < size - 1; j++) {
            if(a[j] > a[j+1]) {
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
            }
        }
    }
}

void printArray(const int a[], int size ) {
    for(int j = 0; j < size; j++) {
        if(j % 20 == 0) {
            cout << endl;
        }

        cout << setw(2) << a[j];
    }
}