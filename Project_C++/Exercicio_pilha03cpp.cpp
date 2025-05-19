#include <iostream>
#include <stdlib.h>
#include <pilha.h>

/*
3) Escreva um programa que acumula �n� valores, informado pelo usu�rio, da
sequ�ncia de Fibonacci em uma pilha. Desempilhe os valores e exiba.
*/



using namespace std;
int main(){
	
	//Defini��o de variaveis
	int x;
	int saida;
	int n = 1;
	int f = 1;
	int soma = 0;
	
	setlocale(LC_ALL,"portuguese");
	
	
	//armazena o valor do numero de repeti�oes do codigo
	cout<<"Digite um numero que deseja indentificar na sequencia de Fibonacci: "<<endl;
	cin>> x ;
	
	struct Pilha P;
	IniPilha(&P);
	
	//insere os dois valores iniciais na pilha
	Push(&P,n);
	Push(&P,f);
	
	for(int i = 3; i <= x; i++){// enquanto i (Contador) for diferente de x(numero de repeti�oes) o codigo se repete
		soma = f + n;  // Novo termo � a soma dos dois anteriores
		Push(&P,soma);
        
        
        // Atualiza os valores de a e b para os pr�ximos c�lculos
        f = n;
        n = soma;
	}
	
	//exibe os valores da pilha at� a quantidade definida pelo usuario
	cout<< "A pilha dessa fun��o Fibonacci �: "<<endl;
	while(!pilhavazia(&P)){
		saida = Pop(&P);
		cout<< saida<<endl;
	}

}
