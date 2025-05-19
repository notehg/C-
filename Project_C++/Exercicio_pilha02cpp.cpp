#include <iostream>
#include <stdlib.h>
#include <pilha.h>

/*
2) Criar uma Pilha P1. Inserir valores numéricos inteiros até que “N” seja digitado
para a questão: Deseja continuar “S” / “N”. Desenvolva uma operação para
transferir elementos de uma pilha P1 para uma pilha P2 (cópia). Ao final,
desempilhe e exiba o conteúdo da Pilha P1 e também da Pilha P2.
*/
using namespace std;
int main(){
	int  x = 0;
	char continuar;
	
	//inicio pilha P1
	struct Pilha P1;
	IniPilha(&P1);
	
	//inicio pilha P2
	struct Pilha P2;
	IniPilha(&P2);
	
	//mensagem inicial
	cout <<"Deseja continuar (Y/N): ";
	cin>> continuar;
	
	
	//condição deseja continuar
	while(continuar == 'Y'| continuar == 'y'){ // se sim aparece a mensagem e adicionamos o valor ao topo da pilha P1 e adicionamos o valor do topo da pilha P1 a P2
		cout<< "Digite um novo numero: ";
		cin>> x;
		
		Push(&P1,x);
		Push(&P2, Top(&P1));
		
		
	//pergunta pra reinciar o laço de repetição
	cout <<"Deseja continuar (Y/N): ";
	cin>> continuar;	
	}
	
	
	//função de exibição P1
	cout<<"Conteudo da pilha P1: "<<endl;
	while(!pilhavazia(&P1)){
		x = Pop(&P1);
		cout<< x <<" ";
	}
	
	cout<<endl;
	
	//função de exibição P2
	cout<<"Conteudo da pilha P2: "<<endl;
		while(!pilhavazia(&P2)){
		x = Pop(&P2);
		cout<< x <<" ";
	}
	
}
