/*
 *  Escreva um programa que solicita ao usuário inserir dois números, obtém os dois números do usuário e imprime a soma, produto, diferença
 *  e quociente dos dois números.
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  int num1, num2, soma, diferenca;
  double quociente;

  cout << "Digite dois inteiros: ";
  cin >> num1 >> num2;

  soma = num1 + num2;
  diferenca = num1 - num2;
  quociente = static_cast<double>(num1) / num2;

  cout << "A soma é " << soma << endl;
  cout << "A diferença é " << diferenca << endl;
  cout << "O quociente é " << quociente << endl;

  return 0;
}
