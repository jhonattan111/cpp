#include <iostream>

using std::cout;
using std::endl;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main() {

    cout    << "O volume default da caixa é: " << boxVolume() << endl
            << "O volume de uma caixa com comprimento 10, largura 1 e altura 1 é: " << boxVolume(10) << endl
            << "O volume de uma caixa com comprimento 10, largura 5 e altura 1 é: " << boxVolume(10, 5) << endl
            << "O volume de uma caixa com comprimento 10, largura 5 e altura 2 é: " << boxVolume(10, 5, 2) << endl;

    return 0;
}

int boxVolume(int length, int width, int height) {
    return length * width * height;
}