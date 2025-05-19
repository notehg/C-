#include <cstdlib>
#include <iostream>
using namespace std;

/*
7�) Criar um programa que retorne o fatorial de um n�mero, usando uma fun��o que receba um valor e retorne o fatorial desse valor.
Fatorial de 5 = 5 x 4 x 3 x 2 x 1 = 120*/

using namespace std;

// Fun��o que calcula o fatorial de um n�mero
int fatorial(int n);

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero
    cout << "Digite um n�mero para calcular o fatorial: ";
    cin >> numero;

    // Chama a fun��o fatorial e exibe o resultado
    cout << "O fatorial de " << numero << " �: " << fatorial(numero) << endl;

    return 0;
}

// Fun��o que retorna o fatorial de um n�mero
int fatorial(int n) {
    int resultado = 1;

    // Verifica se o n�mero � negativo
    if (n < 0) {
        cout << "Fatorial n�o existe para n�meros negativos!" << endl;
        return -1; // Retorna -1 para indicar erro
    }

    // Calcula o fatorial multiplicando os n�meros de 1 at� n
    for (int i = 1; i <= n; i++) {
        resultado *= i; // Multiplica os valores de 1 a n
    }

    return resultado;
}

