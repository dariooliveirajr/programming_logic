#include<iostream>
#include<string>
using namespace std;
int main(){
	int cont;
	string A[5],B[5],X[10];
	for (cont=0;cont<=4;cont++){
		cout<<"Digite um valor: ";
		cin>>A[cont];
	}
	for (cont=0;cont<=4;cont++){
		cout<<"Digite um valor: ";
		cin>>B[cont];
	}
	for (cont=0;cont<=4;cont++){
	X[cont]=A[cont];
	}
	for (cont=0;cont<=4;cont++){
	X[cont+5]=B[cont];
	}
	for (cont=0;cont<=9;cont++){
	cout<<"O valor de X"<<cont<<" e: "<<X[cont]<<endl;
	}
	
	system("Pause");
	return 0;
}
