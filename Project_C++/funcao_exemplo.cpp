#include<iostream>
#include<cstdlib>

using namespace std;

/*int nameFun��o(int dado) > defini��o de fun��o basica  antes do inicio do projeto para que a fun��o em quest�o
sempre definida apos o main seja interperetada pelo compilador (obs:O codigo apos o main s� e comprendido se definirmos
sua inicuializa��o antes de main)
*/

int celsius(int fahr);// Prot�tipo de fun��o
int main()
{
int c, f;
cout << endl << "Digite a temperatura em graus Fahrenheit;";
cin >> f;
c = celsius(f); // Chamada a fun��o e subistituir os valores dela pelos digitados
cout << endl << "Celsius = "<< c << endl;
system("PAUSE");
return 0;
}
// �rea de defini��o das fun��es
int celsius( int fahr)
{
int c;
c = (fahr - 32) * 5 / 9;
return c;
}
