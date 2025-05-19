/*3.ª) Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:
VOLUME = 3.14159 * R2 * ALTURA*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	float R2,Alt,Vol;
	system("CLS");
		cout<<"Digite o valor do Raio do cilindro: ";
		cin>> R2;
		cout<<"Digite o valor da Altura do cilindro: ";
		cin>> Alt;
		Vol= 3.14159 * R2 * R2 * Alt;
		cout<<"O volume desse cilindro e:"<<Vol<<endl;
		system("PAUSE");
		return EXIT_SUCCESS; //pode ser return 0;		
}
