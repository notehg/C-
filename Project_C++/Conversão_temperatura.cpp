/*2.�) Fa�a um programa que leia uma temperatura em graus Cent�grados e apresente-a
convertida em graus Fahrenheit. A f�rmula de convers�o �:
F = (9 * C + 160) / 5, onde F � a temperatura em Fahrenheit e C em graus Cent�grados.*/


#include <iostream>
#include<stdlib.h>

using namespace std;
int main()
{
float Cent, Fahr;
system("CLS");

cout<< "Digite a temperatura em graus Centigrados: "; //saida de texto
cin>>Cent;//entrada de dados

Fahr= (9 * Cent +160)/5; //convers�o
cout<<"A temperatura em  graus Fahrenheit e: " << Fahr <<endl;
system("PAUSE");
return EXIT_SUCCESS; //pode ser return 0;
}
