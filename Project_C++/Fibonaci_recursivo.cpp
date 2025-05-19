#include <iostream>
using namespace std;

/*1.�) Implementar um programa recursivo em C++ que imprima qual o �n� termo da s�rie
de Fibonacci. (1,1,2,3,5,8.....)
Por exemplo: Qual o 6� termo da s�rie? O programa dever� informar 8.
*/

// Fun��o recursiva para calcular o n-�simo termo de Fibonacci
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	setlocale(LC_ALL, ""); // Habilita caracteres acentuados conforme o sistema

    int n;
    cout << "Escolha um termo da s�rie de Fibonacci: ";
    cin >> n;

    int resultado = fibonacci(n);
    cout << "O " << n << "� termo da s�rie �: " << resultado << endl;

    return 0;
}

