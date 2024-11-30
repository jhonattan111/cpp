#include <iostream>

void increaseCounter();

int main() {

    increaseCounter();
    increaseCounter();
    increaseCounter();

    return 0;
}

void increaseCounter() {
    static int counter = 0;

    counter++;

    std::cout << "O valor de counter é " << counter << std::endl;
}


