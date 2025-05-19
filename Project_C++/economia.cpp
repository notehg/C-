#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){
	float j,c,i,n;
	system("CLS");
	
	cout<< "vamos descobri o capital investido em um determinado produto ?"<< endl;
	
	cout<<"Digite o valor dos juros do produto: ";
	cin>>j;
	
	cout<<"Digite o valor da taxa de juros do produto: ";
	cin>>i;
	
	cout<<"Digite o tempo do investimento: ";
	cin>>n;
	
	if(n<=12){
		n = n/12;
		i= i/100;
		c=j/(i*n);
	}
	else{
		c=j/(i*n);

	}
	
	cout<<"O valor investido inicialmente no produto e: "
}
