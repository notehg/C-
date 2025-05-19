//4.ª) Faça um programa que leia 5 valores e informe o valor do maior.

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	float v1,v2,v3,v4,v5, max;
			system("CLS");
			cout<<"digite o Primeiro valor: ";
			cin>> v1;
			cout<<"digite o Segundo valor: ";
			cin>> v2;
			cout<<"digite o Terceiro valor: ";
			cin>> v3;
			cout<<"digite o Quarto valor: ";
			cin>> v4;
			cout<<"digite o Quinto valor: ";
			cin>> v5;
			
			   // Inicializa o valor máximo com o primeiro valor
    		max = v1;
			
			if (v2 > max) {
        max = v2;
    }
    if (v3 > max) {
        max = v3;
    }
    if (v4 > max) {
        max = v4;
    }
    if (v5 > max) {
        max = v5;
    }

    cout << "O maior valor e: " << max << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
