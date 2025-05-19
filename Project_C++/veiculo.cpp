/*
Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um autom�vel que faz �x� km/l. 
Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto na viagem e a velocidade m�dia durante a mesma. 
Desta forma ser� poss�vel obter a dist�ncia percorrida com a f�rmula: DIST�NCIA= TEMPO * VELOCIDADE (utilizar uma fun��o). Tendo o valor da dist�ncia,
 basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula: LITROS_USADOS=DIST�NCIA / �x� (atrav�s de fun��o).
O programa dever� apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem.
*/


#include<iostream>
#include<stdlib.h>

using namespace std;

// Fun��o para calcular a dist�ncia percorrida
float calcular_distancia(float tempo, float vmedia) {
    return tempo * vmedia;
}

// Fun��o para calcular a quantidade de litros usados
float calcular_litros(float distancia, float consumo) {
    return distancia / consumo;
}

int main() {
    float tempo, vmedia, consumo, distanca, litros;

    // Solicita as entradas do usu�rio
    cout << "Forne�a o tempo gasto na viagem (Em horas): ";
    cin >> tempo;
    
    cout << "Forne�a a velocidade m�dia (Em km/h): ";
    cin >> vmedia;
    
    cout << "Forne�a o consumo do carro (km/l): ";
    cin >> consumo;

    // Calcula a dist�ncia percorrida
    distanca = calcular_distancia(tempo, vmedia);

    // Calcula a quantidade de litros usados
    litros = calcular_litros(distanca, consumo);

    // Exibe os resultados
    cout << "Velocidade m�dia: " << vmedia << " km/h" << endl;
    cout << "Tempo gasto na viagem: " << tempo << " horas" << endl;
    cout << "Dist�ncia percorrida: " << distanca << " km" << endl;
    cout << "Quantidade de litros de combust�vel usados: " << litros << " litros" << endl;

    return 0;
}

