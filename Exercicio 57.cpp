#include<iostream>
#include<string>
using namespace std;
int cont, A[3][10];
int main(){
	
	for(cont=0;cont<=9;cont++){
		cout<<"Digite um valor para uma coluna da primeira linha: ";
		cin>>A[1][cont];
	}
	for(cont=0;cont<=9;cont++){
		cout<<"Digite um valor para uma coluna da segunda linha: ";
		cin>>A[2][cont];
	}
	for(cont=0;cont<=9;cont++){
		A[3][cont]=A[1][cont]+A[2][cont];
	}
		cout<<"Valores da linha 1: ";
		for(cont=0;cont<=9;cont++){
		cout<<A[1][cont]<<",";
		}
		cout<<endl<<"Valores da linha 2: ";
		for(cont=0;cont<=9;cont++){
		cout<<A[2][cont]<<",";
		}
		cout<<endl<<"Resultados (linha 3): ";
		for(cont=0;cont<=9;cont++){
		cout<<A[3][cont]<<",";
		}
	cout<<endl;
	system("Pause");
	return 0;
}
