#include <cstdlib>
#include <iostream>
using namespace std;

/*
6�) Criar um programa que receba um n�mero que corresponda a um m�s do 
1� trimestre e escreva o m�s correspondente; caso o usu�rio digite o n�mero
 fora do intervalo dever� aparecer inv�lido, mas utilizando
uma fun��o do tipo void.*/

void  mes_prisemestre(float mes, string &meses, string &validade);
int main(){
	float vmes;
	string vmeses;
	string valv;
	
	cout<<"digite um valor para um mes do primeiro trimestre: ";
	cin>>vmes;
	
	mes_prisemestre(vmes,vmeses,valv);
	cout<<"O valor do mes  e: "<<valv<<endl;
	cout<<"O mes e: "<<vmeses<<endl;

	
	
	return 0;
}
void  mes_prisemestre(float mes, string &meses, string &validade){
	if( mes == 1){
		validade = "valido";
		meses = "Janeiro";
	}
	else if( mes == 2){
		validade = "valido";
		meses = "Fevereiro";
	}
	else if(mes == 3){
		validade = "valido";
		meses="Mar�o";
	}
	else{
	validade = "Invalido";
	meses ="impossivel determinar";
	}
}

