/*2.�) Dado um n�mero real X e um n�mero natural K, calcular a pot�ncia X elevado a K atrav�s de produtos sucessivos.
xk = x.x.x.x. ...... x
Obs: independente do valor de k, para x=0 ou 1 o resultado � imediato, isto �, 0 e 1.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
    double x;
    int k;
    double result = 1; // Inicializa a vari�vel result como 1, pois � o valor neutro para multiplica��o
    
    cout << "Digite a base da pot�ncia: ";
    cin >> x;
    
    cout << "Digite o n�mero ao qual deseja elevar: ";
    cin >> k;
    
    // Tratamento para X = 0 ou X = 1, que t�m resultados imediatos
    if (x == 0) {
        result = 0;
    } else if (x == 1) {
        result = 1;
    } else {
        // Calculando a pot�ncia atrav�s de multiplica��o sucessiva
        for (int i = 0; i < k; i++) {
            result *= x; // Multiplica sucessivamente
        }
    }
    
    cout << "O resultado de " << x << " elevado a " << k << " �: " << result << endl;
    
    return 0;
}

