#include <iostream>

int main()
{
    int numero;
    bool ehPar = false;
    std::cout << "Insira um número: ";
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        ehPar = true;
    }

    std::cout << "O número " << numero << " é " << ((ehPar) ? "par" : "ímpar") << "\n";
}