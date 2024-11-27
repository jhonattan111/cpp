#include <iostream>

/*
 * AO USAR using, o namespace não precisa ser declarado ao chamar a função
 */
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num1;
    cout << "Digite um número: ";
    cin >> num1;
    cout << "O número digitado é " << num1 << endl;
    return 0;
}
