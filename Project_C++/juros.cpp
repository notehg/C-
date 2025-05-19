#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	float j,c,i,n;
	system("CLS");
	
	cout<< "vamos descobri os juros de um produto ?"<< endl;
	
	cout<<"Digite o valor do capital investido no produto: ";
	cin>>c;
	
	cout<<"Digite o valor da taxa de juros  no produto: ";
	cin>>i;
	
	cout<<"Digite o valor do tempo transcorido deste investimento  no produto: ";
	cin>>n;
	
	if(n<=12)
	{
		n= n/12;
		i= i/100;
		j=c*i*n;
		
	}
	else{
		j=c*i*n;
	}
	
	    cout << "O valor dos juros e: " << j << endl;

}
