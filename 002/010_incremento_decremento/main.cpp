#include <iostream>

int main()
{

    for (int i = 0; i < 10; i++)
        std::cout << "for -> i++:\t" << i << std::endl;

    std::cout << std::endl;

    for (int i = 0; i < 10; ++i)
        std::cout << "for -> ++i:\t" << i << std::endl;

    std::cout << std::endl;

    int i = 0;
    while (i++ < 10)
        std::cout << "while -> i++:\t" << i << std::endl;

    std::cout << std::endl;

    i = 0;
    while (++i < 10)
        std::cout << "while -> ++i:\t" << i << std::endl;

    std::cout << std::endl;

    return 0;
}