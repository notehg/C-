/*
Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel que faz “x” km/l. 
Para obter o cálculo, o usuário deverá fornecer o tempo gasto na viagem e a velocidade média durante a mesma. 
Desta forma será possível obter a distância percorrida com a fórmula: DISTÂNCIA= TEMPO * VELOCIDADE (utilizar uma função). Tendo o valor da distância,
 basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS=DISTÂNCIA / “x” (através de função).
O programa deverá apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem.
*/


#include<iostream>
#include<stdlib.h>

using namespace std;

// Função para calcular a distância percorrida
float calcular_distancia(float tempo, float vmedia) {
    return tempo * vmedia;
}

// Função para calcular a quantidade de litros usados
float calcular_litros(float distancia, float consumo) {
    return distancia / consumo;
}

int main() {
    float tempo, vmedia, consumo, distanca, litros;

    // Solicita as entradas do usuário
    cout << "Forneça o tempo gasto na viagem (Em horas): ";
    cin >> tempo;
    
    cout << "Forneça a velocidade média (Em km/h): ";
    cin >> vmedia;
    
    cout << "Forneça o consumo do carro (km/l): ";
    cin >> consumo;

    // Calcula a distância percorrida
    distanca = calcular_distancia(tempo, vmedia);

    // Calcula a quantidade de litros usados
    litros = calcular_litros(distanca, consumo);

    // Exibe os resultados
    cout << "Velocidade média: " << vmedia << " km/h" << endl;
    cout << "Tempo gasto na viagem: " << tempo << " horas" << endl;
    cout << "Distância percorrida: " << distanca << " km" << endl;
    cout << "Quantidade de litros de combustível usados: " << litros << " litros" << endl;

    return 0;
}

