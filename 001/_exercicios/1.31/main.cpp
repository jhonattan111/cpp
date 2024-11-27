/*
 * Escreva um programa que lê um inteiro e determina e imprime se ele é ímpar ou par. [Dica: Utilize o operador módulo. Um número par
 * é um múltiplo de dois. Qualquer múltiplo de dois deixa um resto de zero quando dividido por 2.]
 */

#include <iostream>

int main()
{
  int numero;
  bool ehPar = false;
  std::cout << "Insira um número: ";
  std::cin >> numero;

  if (numero % 2 == 0)
  {
    ehPar = true;
  }

  std::cout << "O número " << numero << " é " << ((ehPar) ? "par" : "ímpar") << "\n";
}