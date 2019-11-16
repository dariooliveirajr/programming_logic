#include <iostream>
using namespace std;
int main ()
{
	double A,B,T;
	char M;
	cout<<"Digite o primeiro numero: ";
	cin>>A;
	cout<<"Digite o segundo numero: ";
	cin>>B;
	cout<<"A - Adicao"<<endl<<"S - Subtracao"<<endl<<"D - Divisao"<<endl<<"M - Multiplicacao"<<endl<<"Digite a inicial de qual operacao deseja utilizar: ";
	cin>>M;
	switch (M)
	{
		case 'A':
			T=A+B;
			cout<<T;
			break;
		case 'S':
			T=A-B;
			cout<<T;
			break;
		case 'D':
			T=A/B;
			cout<<T;
			break;
		case 'M':
			T=A*B;
			cout<<T;
	break;
	}
}
