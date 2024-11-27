/*
 * Escreva um programa que recebe como entrada um número de cinco dígitos,
 * separa o número em seus dígitos individuais e imprime os dígitos separados um do outro por três espaços cada
 * 42339 -> 4 2 3 3 9
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int numero;

    cout << "Insira um número: ";
    cin >> numero;

    if (numero < 10000)
    {
        cout << "O número deve conter 5 dígitos" << endl;
        return -1;
    }

    if (numero > 99999)
    {
        cout << "O número deve conter 5 dígitos" << endl;
        return -1;
    }

    int dig1, dig2, dig3, dig4, dig5;

    dig5 = numero % 10;
    dig4 = (numero % 100 - dig5) / 10;
    dig3 = (numero % 1000 - dig4) / 100;
    dig2 = (numero % 10000 - dig3) / 1000;
    dig1 = (numero % 100000 - dig2) / 10000;

    cout << dig1 << '\t' << dig2 << '\t' << dig3 << '\t' << dig4 << '\t' << dig5 << endl;

    return 0;
}