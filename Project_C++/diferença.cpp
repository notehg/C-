/*8.a.) . Faça um programa que leia 15 valores e informe o valor da diferença entre a média e
o maior valor.*/

#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,max,med,dife;
			system("CLS");
			cout<<"digite o valor: ";
			cin>> v1;
			cout<<"digite o valor: ";
			cin>> v2;
			cout<<"digite o valor: ";
			cin>> v3;
			cout<<"digite o valor: ";
			cin>> v4;
			cout<<"digite o valor: ";
			cin>> v5;
			cout<<"digite o valor: ";
			cin>> v6;
			cout<<"digite o valor: ";
			cin>> v7;
			cout<<"digite o valor: ";
			cin>> v8;
			cout<<"digite o valor: ";
			cin>> v9;
			cout<<"digite o valor: ";
			cin>> v10;
			cout<<"digite o valor: ";
			cin>> v11;
			cout<<"digite o valor: ";
			cin>> v12;
			cout<<"digite o valor: ";
			cin>> v13;
			cout<<"digite o valor: ";
			cin>> v14;
			cout<<"digite o valor: ";
			cin>> v15;
			
			med= (v1+v2+v3+v4+v5+v6+v7+v8+v9+v10+v11+v12+v13+v14+v15)/15;
			cout<<"A media e igual a: "<<med<<endl;
			
			max=v1;
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
    if (v5 > max) {
        max = v6;
    }
    if (v6 > max) {
        max = v7;
    }
    if (v7 > max) {
        max = v8;
    }
    if (v8 > max) {
        max = v9;
    }
    if(v9>max){
    	max=v10;
	}
    if(v10>max){
    	max=v11;
	}
	    if(v11>max){
    	max=v12;
	}
	    if(v12>max){
    	max=v13;
	}
	    if(v13>max){
    	max=v14;
	}
	    if(v14>max){
    	max=v15;
	}
	
	    cout << "O maior valor e: " << max << endl;
	    dife= med-max;
	    cout<<"A diferença entre os valores e:" << dife<<endl;
	    	return 0;

	}
