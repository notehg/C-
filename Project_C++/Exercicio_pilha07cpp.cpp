#include <iostream>
#include <string>
#include <pilha.h>

/*7) Uma string é considerada palíndroma se ela pode ser lida da esquerda para a 
direita ou da direita para a esquerda com o mesmo significado. Neste caso, não 
podemos considerar acentuações, letras maiúsculas ou minúsculas, os espaços e 
os caracteres especiais. A seguir estão alguns exemplos: 
Radar 
Subi no Onibus 
Go dog 
Faça um programa em C++ para verificar se uma expressão é ou não palíndroma*/

using namespace std;

int main() {
	//inicia as variaveis de texto
    string fraseOriginal;
    string fraseLimpa = "";
    string fraseInvertida = "";
    	
	setlocale(LC_ALL,"portuguese");


	//Inicia a pilha
    Pilha P;
    IniPilha(&P);

	
    cout << "Digite uma frase para verificar se é palíndroma: ";
    //getline le a fraze completa sem espaços
    getline(cin, fraseOriginal);

    // Limpa a frase: mantém apenas letras e converte tudo para minúsculas
    for (int i = 0; i < fraseOriginal.length(); i++) {
        char c = fraseOriginal[i];

        // Verifica se é letra (sem usar isalpha)
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

            // Converte para minúsculo (sem usar tolower)
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }

            fraseLimpa += c;
            Push(&P, c);
        }
    }

    // Desempilha para inverter a frase
    while (!pilhavazia(&P)) {
        fraseInvertida += Pop(&P);
    }

    // Mostra resultado
    cout << "Frase limpa:     " << fraseLimpa << endl;
    cout << "Frase invertida: " << fraseInvertida << endl;

    if (fraseLimpa == fraseInvertida) {
        cout << "É uma frase palíndroma!" << endl;
    } else {
        cout << "Não é palíndroma." << endl;
    }

    return 0;
}

