#include <iostream>
#include <stdlib.h>
#include <pilha.h>
#include <string>

/*
6) Fa�a um programa para obter a convers�o num�rica de acordo com a op��o do 
usu�rio, utilizando uma pilha:
(a) Decimal para Octal
(b) Decimal para Hexadecimal
Dica para Hexadecimal: Se o resto for 10,11,12, 13, 14 ou 15, imprima, 
respectivamente, A,B,C,D,E ou F.
*/
using namespace std;

int main() {
	//inicia as variaveis
    int n, resto, divi;
    char seletor;
    
    setlocale(LC_ALL, "portuguese");  // Configura a localidade para portugu�s
    
    struct Pilha P;
    IniPilha(&P);  // Inicializa a pilha

    // Solicita ao usu�rio a escolha da op��o de convers�o
    cout << "Escolha uma op��o de convers�o:" << endl;
    cout << "(a) Decimal para Octal" << endl;
    cout << "(b) Decimal para hexadecimal" << endl;
    cin >> seletor;

    // Caso o usu�rio escolha a convers�o de Decimal para Octal
    if (seletor == 'A' || seletor == 'a') {
        cout << "Digite um valor para converter para octal:" << endl;
        cin >> n;

        // Converte o n�mero decimal para octal
        while (n > 0) {
            resto = n % 8;  // Obt�m o resto da divis�o por 8
            Push(&P, resto);  // Empilha o resto
            n = n / 8;  // Atualiza o n�mero dividindo por 8
        }

        cout << "N�mero em octal: ";
        // Desempilha e exibe os restos na ordem correta (de baixo para cima)
        while (!pilhavazia(&P)) {
            int octa = Pop(&P);  // Desempilha o topo
            cout << octa;  // Exibe o valor desempilhado
        }
        cout << endl;  // Nova linha ap�s o resultado
    }
    // Caso o usu�rio escolha a convers�o de Decimal para Hexadecimal
    else if (seletor == 'B' || seletor == 'b') {
        cout << "Digite um valor para converter para hexadecimal:" << endl;
        cin >> n;

        // Converte o n�mero decimal para hexadecimal
        while (n > 0) {
            resto = n % 16;  // Obt�m o resto da divis�o por 16
            Push(&P, resto);  // Empilha o resto
            n = n / 16;  // Atualiza o n�mero dividindo por 16
        }

		cout << "N�mero em hexadecimal: ";
		while (!pilhavazia(&P)) { //se a pilha estiver vazia executa
    	int hex = Pop(&P);//empilha os valores
    	if (hex < 10) {//se hex maior que 10 exibe o valor dividido
        cout << hex;
    } else {
        cout << char('A' + (hex - 10));//se n�o exibe como caracteres
    }
}

        cout << endl;  // Nova linha ap�s o resultado
    }
    else {
        cout << "Digite uma op��o v�lida!" << endl;  // Caso o usu�rio insira uma op��o inv�lida
    }

    return 0;
}

