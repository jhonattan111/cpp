#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <iomanip>

using std::setw;

#include <cstdlib>

int main()
{
    unsigned seed;

    cout << "Forneça a semente: ";
    cin >> seed;
    srand(seed);

    for (int i = 1; i <= 10; i++)
    {
        cout << setw(10) << 1 + rand() % 6;
        if (i % 5 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}