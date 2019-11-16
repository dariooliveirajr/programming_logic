#include <iostream>
using namespace std;
int main()
{
	int M;
	double P1,P2;
	cout <<"Digite a quantidade de macas compradas: ";
	cin >>M;
	if(M>=12)
	{
		P2=M*1;
		cout<<"O valor total da compra e: R$"<<P1<<"\n";
	}
	else
	{
		P1=M*1.30;
		cout<<"O valor total da compra e: R$"<<P2<<"\n";
	}
system("pause");
return 0;	
}
