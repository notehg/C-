//5.�) Apresentar todos os valores num�ricos inteiros �mpares situados na faixa de 0 a 20.

#include<iostream>
#include<stdlib.h>

using namespace  std;
int main(){
	int Inp;
	for(Inp=1;Inp<=20;Inp+= 2)
	{
		cout<< Inp<< endl;
	}
	return 0;
}
