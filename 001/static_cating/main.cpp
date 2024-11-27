#include <iostream>

int main()
{
    std::cout << static_cast<int>('a') << "\n";
    std::cout << static_cast<int>('A') << "\n";
    // EMOJI É UM CARACTERE MUITO GRANDE PARA SER TRANSFORMADO
    // std::cout << static_cast<int>('❤️') << "\n";
    std::cout << static_cast<int>('j') << "\n";
}