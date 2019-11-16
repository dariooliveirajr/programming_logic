#include <iostream>
using namespace std;
int main()
{
	double V,VC,X; //Declaração de variáveis
	int Q;
	
	cout<<"Digite o valor unitario do produto em reais: ";
	cin>>V;
	cout<<"Digite a quantidade comprada: ";
	cin>>Q;
	//Cálculos
	VC=V*Q;
	if(VC>1800)
	{
		X=VC-130;
		cout<<"O valor da compra com o desconto e: "<<X<<"\n";
	}
	else
	{
		cout<<"O valor da compra e: "<<VC<<"\n";
	}
return 0;
system ("pause");
}
