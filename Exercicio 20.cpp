#include <iostream>
#include <string>
using namespace std;
int main()
{
	double N,SB,EX,ST,SX;
	string C;
	cout<<"Digite o codigo do cliente: ";
	cin>>C;
	cout<<"Digite a quantidade de horas trabalhadas: ";
	cin>>N;
	if(N>50)
	{
		EX=N-50;
		SX=EX*20;
		SB=500;
		ST=SX+SB;
	}
	else
	{
		SB=N*10;
		EX=0;
		SX=0;
		ST=SB;
	}
	cout<<"Codigo do cliente: "<<C<<endl<<" Horas trabalhadas: "<<N<<endl<<" Excesso de pagamento: "<<EX<<endl<<" Salario Base: "<<SB<<endl<<" Salario Total: "<<ST<<endl<<" Excedente:"<<SX<<endl;
system ("pause");
return 0;
}
