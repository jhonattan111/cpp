#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::endl;

using std::setiosflags;
using std::setprecision;
using std::setw;

int main()
{
    float investimentoInicial = 1000.0;
    float r = 5.0;
    float contaCorrente = 0.0;

    int n = 10;
    float resultado = investimentoInicial;

    cout << "Ano" << '\t' << "Mês" << '\t' << "Depósito" << '\t' << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            resultado = resultado * pow((1 + ((r / 12) / 100)), 1);

            cout << i << '\t' << j << '\t' << setprecision(2) << setiosflags(std::ios::fixed | std::ios::showpoint) << resultado << endl;
        }
    }
}