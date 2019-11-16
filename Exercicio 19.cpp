#include <iostream>
using namespace std;
int main()
{
	double P, EX, M;
	cout << "Digite o peso do peixe; ";
	cin >>P;
	if(P>50)
	{
		EX=(P-50);
		M=(EX*4);
		cout <<"Valor do exesso: " <<EX <<"\n";
		cout <<"Valor da multa: " <<M <<"\n";
	}
	else
	{
		EX=0;
		M=0;
		cout <<"Valor do exesso: " <<EX <<"\n";
		cout <<"Valor da multa: " <<M <<"\n";
	}
system("pause");
return 0;
}

