#include <iostream>
using namespace std;
int main ()
{
	double A,B;
	cout <<"Digite um numero: ";
	cin >>A;
	cout <<"Digite outro numero: ";
	cin >>B;
	if (A<B)
	{
		cout <<"A Ordem crescente desses numeros e:" << A <<"/" <<B <<"\n";
	}
	else
	{
		cout <<"A Ordem crescente desses numeros e:" << B <<"/" <<A <<"\n";
	}
system ("pause");
return 0;
}
