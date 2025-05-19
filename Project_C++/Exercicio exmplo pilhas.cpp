//Empilhar uma sequencia de valores até 99 ,que seja digitado exibindo valores invertidos
//Exercicio exmplo pilhas 

#include<iostream>
#include<stdlib.h>
#include<pilha.h> // usar a biblioteca pilha.h

using namespace std;
int main(){
	setlocale(LC_ALL,"portuguese"); //adicionar valores e caracteres da lingua portuguesa
	
	int n = 0;
	
	//Criar a estrutura da pilha
	struct Pilha P; //Declara uma pilha P
	IniPilha(&P);   //inicia a pilha sendo que o "&" é ultilizado para indentar a localização da pilha
	
	
	while(n!=99){
		cout <<"Digite um novo número: " << endl;
		cin>>n;
		
		if(n!=99)
		Push(&P,n); //Empilha um novo valor se for divferende do valor 99
		
		}
		
		while(!pilhavazia(&P)){//enquanto a pilha estiver vazia
			n = Pop(&P);
			cout << n <<" "; //exibe
			
			
		}
}

