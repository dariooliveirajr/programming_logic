#include <iostream>
using namespace std;
int main()
{
	double NC,S,D,C,SA;
	cout<<"Digite o numero da conta do cliente: ";
	cin>>NC;
	cout<<"Digite o valor do saldo do cliente: ";
	cin>>S;
	cout<<"Digite o valor do debito do cliente: ";
	cin>>D;
	cout<<"Digite o valor do credito do cliente: ";
	cin>>C;
	SA=S-D+C;
	if(SA>=0)
	{
		cout<<"Saldo Positivo"<<endl;
	}
	else
	{
		cout<<"Saldo Negativo"<<endl;
	}
system("pause");
return 0;
}
