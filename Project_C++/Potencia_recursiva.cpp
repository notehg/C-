#include <iostream>
#include <locale.h>
using namespace std;

/*
4.a.)Elaborar um programa recursivo que dado um número natural K, calcular a potência X elevado a K através de produtos sucessivos.
Obs.:
xk = x *x k-1 Se k > 1
xk = x Se k=1
xk = 1 Se k=0
Independente do valor de k, para X=0 ou 1 o resultado é imediato, isto é, 0 e 1.

*/

// Função recursiva para calcular X^K
int potencia(int x, int k) {
    // Casos base:
    if (x == 0 || x == 1) {
        return x;
    }
    if (k == 0) {
        return 1;
    }
    if (k == 1) {
        return x;
    }

    // Passo recursivo
    return x * potencia(x, k - 1);
}

int main() {
    setlocale(LC_ALL, "");

    int x, k;
    cout << "Digite a base (X): ";
    cin >> x;

    cout << "Digite o expoente (K): ";
    cin >> k;

    int resultado = potencia(x, k);

    cout << x << " elevado a " << k << " é: " << resultado << endl;

    return 0;
}
