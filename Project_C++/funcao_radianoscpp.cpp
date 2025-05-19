#include <cstdlib>
#include <iostream>
using namespace std;

/*
4ª) Criar um programa que receba um grau e o converta para radianos através de uma função.
Fórmula: radiano = grau * pi / 180*/

float radianos(float grau);
int main(){
	float vgrau; 
	cout<<"Digite o valor de graus que deseja converter para radianos: ";
	cin>> vgrau;
	cout<<"O valor convertido e: "<< radianos(vgrau);
}

float radianos (float grau){
	return (grau * 3.14)/180;
}
