#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num1, num2;

  cout << "Digite dois inteiros e lhe direi\n"
       << "quais os relacionamentos que eles satisfazem: ";

  cin >> num1 >> num2;

  if (num1 == num2)
  {
    cout << num1 << " é igual a " << num2 << endl;
  }

  if (num1 != num2)
  {
    cout << num1 << " não é igual a " << num2 << endl;
  }

  if (num1 < num2)
  {
    cout << num1 << " é menor que " << num2 << endl;
  }

  if (num1 > num2)
  {
    cout << num1 << " é maior que " << num2 << endl;
  }

  // Não incluí o resto do programa aqui pois ele não alcança esses laços

  return 0;
}