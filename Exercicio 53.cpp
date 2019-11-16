#include <iostream>
#include <string>
using namespace std;
int main(){
	int cont,G;
	string A[10],X;
	for(cont=0;cont<=9;cont++){
		cout<<"A"<<cont<<" "<<"Digite um nome: ";
		cin>>A[cont];
	}
	cout<<"Digite um nome para verificacao: ";
	cin>>X;
	for(cont=0;cont<=9;cont++){
		if(A[cont]==X){
			cont=10;
			G=1;
		}
		else{
		G=0;	
		}
	}
	if(G==1){
		cout<<"O Nome Existe"<<endl;
	}
	else{
		cout<<"O Nome Nao Existe"<<endl;
	}
	system ("pause");
	return 0;
}
