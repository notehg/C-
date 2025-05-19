#include <cstdlib>
#include <iostream>
using namespace std;

/*
6ª) Criar um programa que receba um número que corresponda a um mês do 
1º trimestre e escreva o mês correspondente; caso o usuário digite o número
 fora do intervalo deverá aparecer inválido, mas utilizando
uma função do tipo void.*/

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
		meses="Março";
	}
	else{
	validade = "Invalido";
	meses ="impossivel determinar";
	}
}

