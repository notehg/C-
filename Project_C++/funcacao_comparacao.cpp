#include <cstdlib>
#include <iostream>
using namespace std;

/*
5ª) Criar um programa que mostre qual o maior valor entre dois números, utilizando uma função do tipo void (que não retorna valores).*/

void comparar (float valor1, float valor2,float &maior, float &menor);
int main(){
	float v1,v2,maior,menor;
	cout<<"Digite um valor para ser comparado: ";
	cin>> v1;
	cout<<"Digite outro valor para comparar: ";
	cin>>v2;
	
	comparar(v1,v2,maior,menor);
	cout<<"O maior valor e: "<<maior<<endl;
	cout<<"O menoor valor e:"<<menor<<endl;
	return 0;
	
}

void comparar (float valor1, float valor2,float &maior, float &menor){
	if(valor2 > valor1){
		maior=valor2;
		menor=valor1;
	}
	else{
		maior=valor1;
		menor=valor2;
	}
	
}
