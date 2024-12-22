#include <iostream>

using std::cout;
using std::endl;

#include <cctype>

void convertToUppercase(char*);

int main() {
    
    int *a = new(int);

    cout << "a: " << &a << endl;
    cout << "a: " << *a << endl;
    cout << "a: " << &*a << endl;
    cout << "a: " << *&a << endl;

    char string[] = "caracteres e é $32,98";
    cout << "O string antes da conversão é: " << string << endl;
    convertToUppercase(string);
    cout << "O string depois da conversão é: " << string << endl;
    return 0;
}

void convertToUppercase(char *s_ptr) {
    while (*s_ptr != '\0') {
        if(islower(*s_ptr)) *s_ptr = toupper(*s_ptr);
        ++s_ptr;
    }
}