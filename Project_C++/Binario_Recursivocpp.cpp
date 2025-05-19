#include <iostream>
#include <locale.h>
using namespace std;

// 2.ª) Defina um programa recursivo para, dado um número n, imprimi-lo em base binária.
void imprimirBinario(int n) {
    if (n > 1) {
        imprimirBinario(n / 2);
    }
    cout << n % 2;
}

int main() {
    setlocale(LC_ALL, "");

    int numero;
    cout << "Digite um número inteiro para convertê-lo em binário: ";
    cin >> numero;

    cout << "Representação binária: ";
    if (numero == 0) {
        cout << 0;
    } else {
        imprimirBinario(numero);
    }

    cout << endl;
    return 0;
}

