#include<iostream>
using namespace std;
int main(){
	int A[10],F,X;
	for (F=0;F<=9;F++){
		cout<<"Digite um valor: ";
		cin>>A[F];
	}
	cout<<"Digite um valor para ser encontrado: ";
	cin>>X;
	for (F=0;F<=9;F++){
		if(X==A[F]){
			F=99;
		}
		else{
		}
	}
	if(F>80){
		cout<<"ACHEI";
	}
	else{
		cout<<"NAO ACHEI";
	}
	system("Pause");
	return 0;
}
