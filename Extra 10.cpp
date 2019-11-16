#include <iostream>
using namespace std;
int main()
{
	double SF,VV,X,T;
	cout<<"Digite o valor do salario fixo: ";
	cin>>SF;
	cout<<"Digite o valor das vendas efetuadas: ";
	cin>>VV;
	if(VV<=1500)
	{
		X=VV*3/100;
		T=SF+X;
	}
	else
	{
		X=VV*5/100;
		T=SF+X;
	}
	cout<<"Seu salario total e: "<<T<<endl;
system("pause");
return 0;
}












