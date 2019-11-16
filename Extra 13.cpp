#include<iostream>
using namespace std;
int main ()
{
	double NE;
	int AN,AI,T,I;
	cout<< "Digite o numero do empregado: ";
	cin>> NE;
	cout<< "Digite o ano de nascimento: ";
	cin>> AN;
	cout<< "Digite o ano de ingresso na empresa: ";
	cin>> AI;
	I=AN-2017;
	T=AI-2017;
	if(I>=65 || T>=30 || I>=60 && T>=25){
		cout<<"\n"<< "Requerer aposentadoria";
	}
	else{
		cout<< "Nao requerer";
	}
system("pause");
return 0;
}
