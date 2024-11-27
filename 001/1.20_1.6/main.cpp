#include <iostream>

int main()
{
    int integer1, integer2, sum;

    std::cout << "Digite o primeiro inteiro:";
    std::cin >> integer1;

    std::cout << "Digite o segundo inteiro:";
    std::cin >> integer2;

    sum = integer1 + integer2;

    std::cout << "A soma é " << sum << std::endl;

    return 0;
}