#include <iostream>
#include <stdlib.h>
#include <pilha.h>

/*
5)Ler um número indeterminado de valores inteiros, empilhar cada valor lido. O
valor 0 (zero) finaliza a entrada de dados. Exibir o número de elementos da pilha
que possuem valor par.  
*/
using namespace std;
int main(){
//defini as variaveis
int i = -1;
int par;

struct Pilha P;
IniPilha(&P);

while(i!=0){//enquanto i diferente de 0(Caracter finalizar) adiciona um novo numero digitados
	cout<<"Digite um novo numero(0 para sair):"<<endl;
	cin>> i;
		if(i!=0)
		Push(&P,i); //Empilha os valores desde que seja diferenete de zero
		
		}
		
		while(!pilhavazia(&P)){//enquanto a pilha estiver vazia
		i = Pop(&P);
		if(i % 2 ==0){
			par++; //exibe os valore das divisões do numero i que tiverem como resto um valor igual a zero adiciona mais um a o valor digitado do contador de pares
		}
		}
		
		cout<<"Os numeros Pares da sequencia sao: "<<par<<endl; //lista a quantidade de numerosque correspondem a especificaçõa
		
		return 0;
}
