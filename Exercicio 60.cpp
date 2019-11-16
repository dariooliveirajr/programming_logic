#include <iostream>
using namespace std;
int A[10],cont,C;
int B[10];
int vlr(int A[10]);

int main(){
	for(cont=0;cont<=9;cont++){
	cout<<"Digite um valor "<<" ("<<cont<<")"<<": ";
	cin>>A[cont];
	}
	
	vlr(A);
	
	for(cont=0;cont<=9;cont++){
	cout<<"Quadrado de A["<<cont<<"]: "<<B[cont]<<endl;
	}
	
	system("pause");
	return 0;
}


int vlr(int A[10]){
	for(cont=0;cont<=9;cont++){
	C=A[cont];
	B[cont]=C*C;
	}
	
}



