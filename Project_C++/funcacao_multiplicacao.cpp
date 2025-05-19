#include <cstdlib>
#include <iostream>
using namespace std;

/*
3ª) Criar um programa que receba 2 valores e calcule o produto através de uma função que retorna valores.
*/

float produto(float n1, float n2);
int main(){
	float vn1,vn2;
	cout<<"Digite um valor que deseja multiplicar: ";
	cin>> vn1;
	cout<<"Digite outro valor que deseja multiplicar: ";
	cin>> vn2;
	
	cout<<"O resultdo  e: "<< produto(vn1,vn2);
	
}

float produto(float n1, float n2){
	return n1*n2;
}



