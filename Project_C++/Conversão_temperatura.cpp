/*2.ª) Faça um programa que leia uma temperatura em graus Centígrados e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é:
F = (9 * C + 160) / 5, onde F é a temperatura em Fahrenheit e C em graus Centígrados.*/


#include <iostream>
#include<stdlib.h>

using namespace std;
int main()
{
float Cent, Fahr;
system("CLS");

cout<< "Digite a temperatura em graus Centigrados: "; //saida de texto
cin>>Cent;//entrada de dados

Fahr= (9 * Cent +160)/5; //conversão
cout<<"A temperatura em  graus Fahrenheit e: " << Fahr <<endl;
system("PAUSE");
return EXIT_SUCCESS; //pode ser return 0;
}
