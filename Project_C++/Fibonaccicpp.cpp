/*7.ª) Faça um programa que apresente a série de Fibonacci até o décimo quinto termo. A
série é formada pela seqüência: 1,1,2,3,5,8,13,21,34,....,etc.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int F =1;
	int N =1;
	int soma;
	
	cout << F << " " << N << " ";
	for(int i = 3; i <= 15; i++){
        soma = F + N;  // Novo termo é a soma dos dois anteriores
        cout << soma <<" ";
        
        // Atualiza os valores de a e b para os próximos cálculos
        F = N;
        N = soma;

	}
	return 0;
}
