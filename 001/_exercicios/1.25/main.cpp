/*
 * Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, e então imprime o maior número seguido
 * pelas palavras “é o maior”. Se os números forem iguais, imprime a mensagem “Estes números são iguais”.
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int numero1, numero2;
    cout << "Insira dois números inteiros seu filho da puta: ";
    cin >> numero1 >> numero2;

    if(numero1 == numero2) cout << "Os números digitados polo usuário são iguais." << endl;
    if(numero1 > numero2) cout << numero1 << " " << numero2 << endl;
    if(numero1 < numero2) cout << numero2 << " " << numero1 << endl;

    return 0;
}