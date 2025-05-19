/*Faça um programa que apresente o total da soma obtido dos cem primeiros números
inteiros. (1+2+3+4+......+100)*/

#include<iostream>
#include<stdlib.h>

using namespace  std;
int main(){
	int max=0;
	for(int i =1;i<=100;i++)
	{
		max += i;
		cout<<"A soma dos valores e: "<<max<<endl;
	}
	return 0;
}
