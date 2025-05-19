#include <cstdlib>
#include <iostream>
using namespace std;

/*
7ª) Criar um programa que retorne o fatorial de um número, usando uma função que receba um valor e retorne o fatorial desse valor.
Fatorial de 5 = 5 x 4 x 3 x 2 x 1 = 120*/

using namespace std;

// Função que calcula o fatorial de um número
int fatorial(int n);

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    cout << "Digite um número para calcular o fatorial: ";
    cin >> numero;

    // Chama a função fatorial e exibe o resultado
    cout << "O fatorial de " << numero << " é: " << fatorial(numero) << endl;

    return 0;
}

// Função que retorna o fatorial de um número
int fatorial(int n) {
    int resultado = 1;

    // Verifica se o número é negativo
    if (n < 0) {
        cout << "Fatorial não existe para números negativos!" << endl;
        return -1; // Retorna -1 para indicar erro
    }

    // Calcula o fatorial multiplicando os números de 1 até n
    for (int i = 1; i <= n; i++) {
        resultado *= i; // Multiplica os valores de 1 a n
    }

    return resultado;
}

