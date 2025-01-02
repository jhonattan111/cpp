#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
#include <iostream>

using std::cout;
using std::endl;

void copy1(char *, const char *);
void copy2(char *, const char *);

int main() {
    
    char string1[10], string2[] = "Olá!",
        string3[10], string4[] = "Tchau!";

    cout << "sizeof string1: " << NELEMS(string1) << endl;
    cout << "sizeof string2: " << NELEMS(string2) << endl;
    cout << "sizeof string3: " << NELEMS(string3) << endl;
    cout << "sizeof string4: " << NELEMS(string4) << endl;

    copy1(string1, string2);
    cout << "String1 = " << string1 << endl;

    copy2(string3, string4);
    cout << "string3 = " << string3 << endl;

    cout << "sizeof string1: " << NELEMS(string1) << endl;
    cout << "sizeof string2: " << NELEMS(string2) << endl;
    cout << "sizeof string3: " << NELEMS(string3) << endl;
    cout << "sizeof string4: " << NELEMS(string4) << endl;

    for(int i = 0; i < NELEMS(string1); i++) {
        cout << "string1[" << i << "]: " << string1[i] << '\t' << &string1 << endl;
    }


    return 0;
}

void copy1(char *s1, const char *s2) {
    for(int i = 0; (s1[i] = s2[i]) != '\0'; i++);
}

void copy2(char *s1, const char *s2) {
    for(; (*s1 = *s2) != '\0'; s1++, s2++);
}