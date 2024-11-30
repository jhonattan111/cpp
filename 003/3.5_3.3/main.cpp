#include <iostream>

using std::cout;
using std::endl;

// protótipo da função
int square(int);

int main()
{
    for (int x = 1; x <= 10; x++)
    {
        cout << square(x) << "\t";
    }

    cout << endl;

    return 0;
}

int square(int y)
{
    return y * y;
}