#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int maximum(int, int, int);

int main()
{
    int a, b, c;

    cout << "Forneça três inteiros: ";
    cin >> a >> b >> c;

    cout << "O maior número é: " << maximum(a, b, c) << endl;

    return 0;
}

int maximum(int x, int y, int z)
{

    int max = x;

    if (y > max)
        max = y;
    if (z > max)
        max = z;

    return max;
}