/*
 * Escreva um programa que insere três inteiros a partir do teclado e imprime a soma, a média, o produto, o menor e o maior desses números.
 * O diálogo de tela deve se parecer com o seguinte:
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

int main() {

    int num1, num2, num3, soma, produto, maior, menor;
    double media;

    cout    << "Digite 3 números inteiros: ";
    cin     >> num1 >> num2 >> num3;

    soma = num1 + num2 + num3;
    produto = num1 * num2 * num3;
    media = static_cast<double> (soma) / 3;

    if(num1 <= num2 && num1 <= num3) {
        menor = num1;
    } else if (num2 <= num3 && num2 <= num1) {
        menor = num2;
    } else {
        menor = num3;
    }

    if(num1 >= num2 && num1 >= num3) {
        maior = num1;
    } else if (num2 >= num3 && num2 >= num1) {
        maior = num2;
    } else {
        maior = num3;
    }

    cout    << "Média: "  << setw(20) << media << endl
            << "Produto: " << setw(20) << produto << endl
            << "Soma: "   << setw(20) << soma << endl
            << "Maior: " << setw(20) << maior << endl
            << "Menor: " << setw(20) << menor << endl;

    return 0;
}