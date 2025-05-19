/*1.ª) Faça um programa que leia dois valores e informe a média entre eles. (use float como
tipo de dado).*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
float v1, v2, m;
system("CLS");
cout<< "Digite o Primeiro numero para calcular a media: ";

cin >>v1;

cout <<"Digite o Segundo numero para calcular a media: ";
cin>>v2;

m=(v1+v2)/2;
cout <<"Media = " << m << endl;
system("PAUSE"); // opcional
return EXIT_SUCCESS; //pode ser return 0;
}
