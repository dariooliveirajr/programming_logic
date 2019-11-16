#include <iostream>
using namespace std;
int main(){
	int N1,N2,C,D=0;
	cout<<"Digite o primeiro numero: ";
	cin>>N1;
	cout<<"Digite o segundo numero: ";
	cin>>N2;
	
	if(N1<N2){
		for(C=N1;C<=N2;C++){
			D=D+N1;
			N1++;
		}
	}
	else{
		for(C=N2;C<=N1;C++){
			D=D+N2;
			N2++;
		}	
	}
	cout<<"O resultado da soma e: "<<D<<endl;
	
	system ("pause");
	return 0;
}
