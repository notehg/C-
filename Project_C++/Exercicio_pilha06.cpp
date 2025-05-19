#include <iostream>
#include <stdlib.h>
#include <pilha.h>
#include <string>

/*
6) Faça um programa para obter a conversão numérica de acordo com a opção do 
usuário, utilizando uma pilha:
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
    
    setlocale(LC_ALL, "portuguese");  // Configura a localidade para português
    
    struct Pilha P;
    IniPilha(&P);  // Inicializa a pilha

    // Solicita ao usuário a escolha da opção de conversão
    cout << "Escolha uma opção de conversão:" << endl;
    cout << "(a) Decimal para Octal" << endl;
    cout << "(b) Decimal para hexadecimal" << endl;
    cin >> seletor;

    // Caso o usuário escolha a conversão de Decimal para Octal
    if (seletor == 'A' || seletor == 'a') {
        cout << "Digite um valor para converter para octal:" << endl;
        cin >> n;

        // Converte o número decimal para octal
        while (n > 0) {
            resto = n % 8;  // Obtém o resto da divisão por 8
            Push(&P, resto);  // Empilha o resto
            n = n / 8;  // Atualiza o número dividindo por 8
        }

        cout << "Número em octal: ";
        // Desempilha e exibe os restos na ordem correta (de baixo para cima)
        while (!pilhavazia(&P)) {
            int octa = Pop(&P);  // Desempilha o topo
            cout << octa;  // Exibe o valor desempilhado
        }
        cout << endl;  // Nova linha após o resultado
    }
    // Caso o usuário escolha a conversão de Decimal para Hexadecimal
    else if (seletor == 'B' || seletor == 'b') {
        cout << "Digite um valor para converter para hexadecimal:" << endl;
        cin >> n;

        // Converte o número decimal para hexadecimal
        while (n > 0) {
            resto = n % 16;  // Obtém o resto da divisão por 16
            Push(&P, resto);  // Empilha o resto
            n = n / 16;  // Atualiza o número dividindo por 16
        }

		cout << "Número em hexadecimal: ";
		while (!pilhavazia(&P)) { //se a pilha estiver vazia executa
    	int hex = Pop(&P);//empilha os valores
    	if (hex < 10) {//se hex maior que 10 exibe o valor dividido
        cout << hex;
    } else {
        cout << char('A' + (hex - 10));//se não exibe como caracteres
    }
}

        cout << endl;  // Nova linha após o resultado
    }
    else {
        cout << "Digite uma opção válida!" << endl;  // Caso o usuário insira uma opção inválida
    }

    return 0;
}

