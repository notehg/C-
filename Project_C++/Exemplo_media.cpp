#include<iostream>

using namespace std;
int main(){
	float nota1,nota2,media; //Declarção de variaveis
	cout<<"Digite a nota 1: ";
	cin >> nota1;
	cout<<"digite a nota 2: ";
	cin>> nota2;
	
	media=(nota1+nota2)/2; //calcula medias
	cout<<"A media e igual ha: "<<media<<endl;// Exibe media
	
	if(media>=6)  // Laço de repetição if-else que quando a condição for verdadeira exiba um resultado e quando não exiba outro
	{	
	cout<<"APROVADO!!!";
	}
	else
	{
		cout<<"REPROVADO!!!";
	}
	
	return 0;
}
