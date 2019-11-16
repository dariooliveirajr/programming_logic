#include <iostream>
using namespace std;
int main(){
	int A[5],B[5],C[5],cont;
	
	for(cont=0;cont<=4;cont++){
	cout<<"Digite 5 numeros (Vetor A): ";
	cin>>A[cont];
	}
	
	for(cont=0;cont<=4;cont++){
	cout<<"Digite 5 numeros (Vetor B): ";
	cin>>B[cont];
	}

	for(cont=0;cont<=4;cont++){
	C[cont]=A[cont]+B[cont];
	cout<<"Soma vetor C"<<cont<<": "         <<C[cont]<<endl;
	}
	
	system("pause");
	return 0;
}
