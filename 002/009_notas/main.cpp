#include <iostream>
#include <iomanip>

int main()
{

    int value = 0;
    int teste1 = 0, teste2 = 0;

    while (value != -1)
    {
        std::cout << "Insira o resultado do teste (-1 para sair)" << std::endl;
        std::cin >> value;

        if (value == 1)
            teste1++;

        if (value == 2)
            teste2++;
    }

    if (teste1 > 8)
        std::cout << "Aumente o preço do curso";

    return 0;
}