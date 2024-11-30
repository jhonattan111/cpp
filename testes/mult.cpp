#include <iostream>

int m(int, int);

int main()
{
    std::cout << m(11, 8);

    return 0;
}

int m(int a, int b) {
    if (b==1) {
        return a;
    }
    else {
        return a + m(a, b - 1);
    }
}