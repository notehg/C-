#include <iostream>
#include <stdlib.h>
#include <pilha.h>

/*
4) Ler um n�mero indeterminado de valores inteiros, empilhar cada valor lido. O
valor 0 (zero) finaliza a entrada de dados. Exibir o n�mero de elementos da pilha
que possuem valor �mpar. 
*/
using namespace std;
int main(){
//defini as variaveis
int i = -1;
int impar;

//inicia a pilha
struct Pilha P;
IniPilha(&P);

while(i!=0){//enquanto i diferente de 0(Caracter finalizar) adiciona um novo numero digitado
	cout<<"Digite um novo numero(0 para sair):"<<endl;
	cin>> i;
		if(i!=0)
		Push(&P,i); //Empilha os valores desde que seja diferenete de zero
		
		}
		
		while(!pilhavazia(&P)){//enquanto a pilha estiver vazia
		i = Pop(&P);
		if(i % 2 !=0){
			impar++; //exibe os valore das divis�es do numero i que tiverem como resto um valor diferente de zero adiciona mais um a o valor digitado do contador de impares
		}
		}
		
		cout<<"Os numeros impares da sequencia sao: "<<impar<<endl; //lista a quantidade de numerosque correspondem a especifica��a
		
		return 0;
}
	

