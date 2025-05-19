#include <iostream>
#include <locale.h>
using namespace std;

// 2.�) Defina um programa recursivo para, dado um n�mero n, imprimi-lo em base bin�ria.
void imprimirBinario(int n) {
    if (n > 1) {
        imprimirBinario(n / 2);
    }
    cout << n % 2;
}

int main() {
    setlocale(LC_ALL, "");

    int numero;
    cout << "Digite um n�mero inteiro para convert�-lo em bin�rio: ";
    cin >> numero;

    cout << "Representa��o bin�ria: ";
    if (numero == 0) {
        cout << 0;
    } else {
        imprimirBinario(numero);
    }

    cout << endl;
    return 0;
}

