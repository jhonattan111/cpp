#include <iostream>

using std::cout;
using std::endl;

#include <cstring>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

int main() {
    char x[] = "Programando em c++";
    char y[25], z[16];

    cout << "O string no array x é: " << GREEN << x <<  RESET << endl;
    cout << "O string no array y é: " << CYAN << strcpy(y, x) << RESET << endl;
    strncpy(z, x, 16); // não copia o caractere nulo
    z[14] = '\0'; // acrescenta caractere nulo
    cout << "O string no array z é: " << MAGENTA << z <<  RESET << endl;

    return 0;
}