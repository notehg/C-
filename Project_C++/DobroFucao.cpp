#include <cstdlib>
#include <iostream>

/*
1�) Criar um programa que permita a entrada de um n�mero inteiro e retorne o seu dobro, atrav�s de uma fun��o.
*/
using namespace std;

//chamar fun��o
int dobro (int x);
int main()
{
//definir varivavel para registrar o valor digitado
int v;
system("CLS");
cout << "Digite o valor:";
cin>> v;

//aplicar a fun��o com base no valor digitado 
cout << "Dobro = " << dobro(v) << endl;
system("PAUSE");
return 0;
}

//declaraq��o do escopo da fun��o
int dobro (int x)
{
return(x*2);
}
