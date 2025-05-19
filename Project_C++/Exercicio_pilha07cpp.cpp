#include <iostream>
#include <string>
#include <pilha.h>

/*7) Uma string � considerada pal�ndroma se ela pode ser lida da esquerda para a 
direita ou da direita para a esquerda com o mesmo significado. Neste caso, n�o 
podemos considerar acentua��es, letras mai�sculas ou min�sculas, os espa�os e 
os caracteres especiais. A seguir est�o alguns exemplos: 
Radar 
Subi no Onibus 
Go dog 
Fa�a um programa em C++ para verificar se uma express�o � ou n�o pal�ndroma*/

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

	
    cout << "Digite uma frase para verificar se � pal�ndroma: ";
    //getline le a fraze completa sem espa�os
    getline(cin, fraseOriginal);

    // Limpa a frase: mant�m apenas letras e converte tudo para min�sculas
    for (int i = 0; i < fraseOriginal.length(); i++) {
        char c = fraseOriginal[i];

        // Verifica se � letra (sem usar isalpha)
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

            // Converte para min�sculo (sem usar tolower)
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
        cout << "� uma frase pal�ndroma!" << endl;
    } else {
        cout << "N�o � pal�ndroma." << endl;
    }

    return 0;
}

