#include <cstdlib>
#include <iostream>
using namespace std;

/*
8ª) Criar um programa que verifique se um número é primo ou não, através de uma função. Número primo é divisível somente por 1 e por ele mesmo.*/


using namespace std;

// Função que verifica se o número é primo
bool ehPrimo(int n);

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    cout << "Digite um número para verificar se é primo: ";
    cin >> numero;

    // Verifica se o número é primo e exibe o resultado
    if (ehPrimo(numero)) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}

// Função que verifica se o número é primo
bool ehPrimo(int n) {
    // Números menores que 2 não são primos
    if (n <= 1) {
        return false;
    }

    // Verifica se o número é divisível por qualquer número de 2 até a raiz quadrada de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { // Se n é divisível por i, então não é primo
            return false;
        }
    }

    // Se não for divisível por nenhum número, é primo
    return true;
}

