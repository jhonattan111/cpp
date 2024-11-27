/*
 * Escreva um programa que lê cinco inteiros e determina e imprime o maior e o menor inteiro no grupo. Utilize somente as técnicas de
 * programação que você aprendeu neste capítulo.
 */

#include <iostream>
#define QUANTIDADE_NUMEROS 5
int main()
{

  int numeros[QUANTIDADE_NUMEROS];
  int menor_numero = 2147483647, maior_numero = 0;

  for (int i = 0; i < QUANTIDADE_NUMEROS; i++)
  {
    std::cout << "Digite um número inteiro: ";
    std::cin >> numeros[i];
  }

  for (int i = 0; i < QUANTIDADE_NUMEROS; i++)
  {
    if (numeros[i] > maior_numero)
    {
      std::cout << "numeros" << i << ": " << numeros[i] << "\n";
      maior_numero = numeros[i];
    }

    if (numeros[i] < menor_numero)
    {
      menor_numero = numeros[i];
    }
  }

  std::cout << "Maior inteiro é " << maior_numero << "\n";
  std::cout << "Menor inteiro é " << menor_numero << "\n";

  return 0;
}