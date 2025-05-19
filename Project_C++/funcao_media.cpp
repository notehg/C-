#include <cstdlib>
#include <iostream>
using namespace std;

/*
2ª) Criar um programa que receba 4 notas e calcule a média aritmética, através de uma função.
*/

//chamar função
float media (float n1, float n2, float n3, float n4);
int main()
{
	float vnota1,vnota2,vnota3,vnota4;
	cout<<"Digite sua primeira nota do semestre: ";
	cin>>vnota1;
	cout<<"Digite sua Segunda nota do semestre: ";
	cin>>vnota2;
	cout<<"Digite sua terceira nota do semestre: ";
	cin>>vnota3;
	cout<<"Digite sua quarta nota do semestre: ";
	cin>>vnota4;
	
	cout<< "a media e igual ha: "<< media(vnota1,vnota2,vnota3,vnota4)<<endl;
	return 0;
	
}

float media (float n1, float n2, float n3, float n4){
	return(n1+n2+n3+n4)/4;
}
