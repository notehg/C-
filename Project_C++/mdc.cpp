/*1.ª) Dados dois números naturais A e B, calcular o MDC entre A e B através do processo e exemplo:
• Para A=80 e B=112:
1. Dividir o número maior pelo menor:
112 dividido por 80 -> quociente 1 e resto 32;
2. Não dando resto zero, dividir o divisor pelo resto da divisão anterior:
80 dividido por 32 -> quociente 2 e resto 16;
3. Prosseguir com as divisões até obter resto zero.
32 dividido por 16 ->quociente 2 e resto 0.
Portanto, o MDC(80,112) = 16.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int A,B,resto,maior,menor;
	
	
	cout<< "Digite o valor de a: "<<endl;
	cin>> A;
	
	cout<<"Digite o valor de b:"<<endl;
	cin>> B;
	
	maior= A;
	menor=B;
	
	if(A>B){
		
	maior=B;
	menor=A;
	
	}
	

 while (menor != 0) {
        resto = maior % menor;  // Calcula o resto
        maior = menor;           // Atualiza maior para o valor de menor
        menor = resto;           // Atualiza menor para o resto
    }

	
	
	cout<<"o mdc de e: "<< maior<< endl;
		
}
