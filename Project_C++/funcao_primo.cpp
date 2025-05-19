#include <cstdlib>
#include <iostream>
using namespace std;

/*
8�) Criar um programa que verifique se um n�mero � primo ou n�o, atrav�s de uma fun��o. N�mero primo � divis�vel somente por 1 e por ele mesmo.*/


using namespace std;

// Fun��o que verifica se o n�mero � primo
bool ehPrimo(int n);

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero
    cout << "Digite um n�mero para verificar se � primo: ";
    cin >> numero;

    // Verifica se o n�mero � primo e exibe o resultado
    if (ehPrimo(numero)) {
        cout << numero << " � um n�mero primo." << endl;
    } else {
        cout << numero << " n�o � um n�mero primo." << endl;
    }

    return 0;
}

// Fun��o que verifica se o n�mero � primo
bool ehPrimo(int n) {
    // N�meros menores que 2 n�o s�o primos
    if (n <= 1) {
        return false;
    }

    // Verifica se o n�mero � divis�vel por qualquer n�mero de 2 at� a raiz quadrada de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { // Se n � divis�vel por i, ent�o n�o � primo
            return false;
        }
    }

    // Se n�o for divis�vel por nenhum n�mero, � primo
    return true;
}

