#include <iostream>
using namespace std;

/*1.ª) Implementar um programa recursivo em C++ que imprima qual o “n” termo da série
de Fibonacci. (1,1,2,3,5,8.....)
Por exemplo: Qual o 6º termo da série? O programa deverá informar 8.
*/

// Função recursiva para calcular o n-ésimo termo de Fibonacci
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	setlocale(LC_ALL, ""); // Habilita caracteres acentuados conforme o sistema

    int n;
    cout << "Escolha um termo da série de Fibonacci: ";
    cin >> n;

    int resultado = fibonacci(n);
    cout << "O " << n << "º termo da série é: " << resultado << endl;

    return 0;
}

