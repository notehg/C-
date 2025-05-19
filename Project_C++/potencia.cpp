/*2.ª) Dado um número real X e um número natural K, calcular a potência X elevado a K através de produtos sucessivos.
xk = x.x.x.x. ...... x
Obs: independente do valor de k, para x=0 ou 1 o resultado é imediato, isto é, 0 e 1.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    double x;
    int k;
    double result = 1; // Inicializa a variável result como 1, pois é o valor neutro para multiplicação
    
    cout << "Digite a base da potência: ";
    cin >> x;
    
    cout << "Digite o número ao qual deseja elevar: ";
    cin >> k;
    
    // Tratamento para X = 0 ou X = 1, que têm resultados imediatos
    if (x == 0) {
        result = 0;
    } else if (x == 1) {
        result = 1;
    } else {
        // Calculando a potência através de multiplicação sucessiva
        for (int i = 0; i < k; i++) {
            result *= x; // Multiplica sucessivamente
        }
    }
    
    cout << "O resultado de " << x << " elevado a " << k << " é: " << result << endl;
    
    return 0;
}

