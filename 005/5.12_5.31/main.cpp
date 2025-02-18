#include <iostream>

using std::cout;
using std::endl;

#include <cstring>
#include "./colors.h"

int main() {
    char s1[20] = "Feliz ";
    char s2[] = "Ano novo ";
    char s3[40] = "";

    cout << RED << "s1 " << RESET << "= " << s1 << endl <<
            RED << "s2 " << RESET << "= " << s2 << endl;

    cout << BLUE << "strcat(s1, s2) => " << RESET << strcat(s1, s2) << endl;
    cout << BLUE << "str"<< RED << "n" << BLUE << "cat(s3, s1, 6) => " << RESET << strncat(s3, s1, 6) << endl;
    cout << BLUE << "strcat(s3, s1) => " << RESET << strcat(s3, s1) << endl;

    cout << endl;

    cout << "s1 = " << GREEN << s1 << RESET << endl;
    cout << "s2 = " << GREEN << s2 << RESET << endl;
    cout << "s3 = " << GREEN << s3 << RESET << endl;

    return 0;
}