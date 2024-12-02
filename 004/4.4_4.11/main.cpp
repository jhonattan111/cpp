#include <iostream>

using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>
#include <ctime>

int main() {
    const int arraySize = 7;
    int face, frequency[arraySize] = { 0 };

    srand(time(0));

    for(int roll = 1; roll <= 6000; roll++)
        ++frequency[1 + rand() % 6];

    cout << "Face" << setw(13) << "Frequência" << endl;

    for(int face = 1; face < arraySize; face++) {
        cout << setw(4) << face << setw(12) << frequency[face] << endl;
    }

    return 0;
}