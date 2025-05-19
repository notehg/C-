#include<iostream>
#include<cstdlib>

using namespace std;

/*int nameFunção(int dado) > definição de função basica  antes do inicio do projeto para que a função em questão
sempre definida apos o main seja interperetada pelo compilador (obs:O codigo apos o main só e comprendido se definirmos
sua inicuialização antes de main)
*/

int celsius(int fahr);// Protótipo de função
int main()
{
int c, f;
cout << endl << "Digite a temperatura em graus Fahrenheit;";
cin >> f;
c = celsius(f); // Chamada a função e subistituir os valores dela pelos digitados
cout << endl << "Celsius = "<< c << endl;
system("PAUSE");
return 0;
}
// Área de definição das funções
int celsius( int fahr)
{
int c;
c = (fahr - 32) * 5 / 9;
return c;
}
