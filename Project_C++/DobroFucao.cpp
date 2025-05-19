#include <cstdlib>
#include <iostream>

/*
1ª) Criar um programa que permita a entrada de um número inteiro e retorne o seu dobro, através de uma função.
*/
using namespace std;

//chamar função
int dobro (int x);
int main()
{
//definir varivavel para registrar o valor digitado
int v;
system("CLS");
cout << "Digite o valor:";
cin>> v;

//aplicar a função com base no valor digitado 
cout << "Dobro = " << dobro(v) << endl;
system("PAUSE");
return 0;
}

//declaraqção do escopo da função
int dobro (int x)
{
return(x*2);
}
