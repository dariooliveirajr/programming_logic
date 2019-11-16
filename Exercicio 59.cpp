#include <iostream>
using namespace std;
int S;
int conta(int S);
float M,H;

int main(){
	cout<<"Digite um valor de segundos: ";
	cin>>S;
	conta(S);
	cout<<"Valor em seg: "<<S<<endl<<"Valor em Min:"<<M<<endl<<"Valor em Hr:"<<H<<endl;
	system("pause");
	return 0;
}
int conta(int S){
	M=S/60;
	H=M/60;
}



