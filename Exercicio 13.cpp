#include <iostream>
#include <string>
using namespace std;
int main()
{
	string A, B, C, D;
	cout <<"Digite um valor: ";
	cin >>A ;
	cout <<"Digite o segundo valor: ";
	cin >>B ;
	C=A;
	D=B;
	B=C;
	A=D;
	cout <<"Primeiro valor: " << A <<endl <<"Segundo valor: "<<B <<endl;
system ("pause");
return 0;
}
