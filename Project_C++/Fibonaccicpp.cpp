/*7.�) Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. A
s�rie � formada pela seq��ncia: 1,1,2,3,5,8,13,21,34,....,etc.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int F =1;
	int N =1;
	int soma;
	
	cout << F << " " << N << " ";
	for(int i = 3; i <= 15; i++){
        soma = F + N;  // Novo termo � a soma dos dois anteriores
        cout << soma <<" ";
        
        // Atualiza os valores de a e b para os pr�ximos c�lculos
        F = N;
        N = soma;

	}
	return 0;
}
