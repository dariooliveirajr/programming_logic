#include <iostream>
using namespace std;
int main()
{
	int S,N1,N2,N3,X;
	cout <<"Digite a serie do aluno: ";
	cin >>S;
	cout <<"Digite a primeira nota: ";
	cin >>N1;
	cout <<"Digite a segunda nota: ";
	cin >>N2;
	cout <<"Digite a terceira nota: ";
	cin >>N3;
	X=(N1+N2+N3)/3;
	if (S==9 && X>=7 ||N1>=6&&N2>=6&&N3>=6 )
	{
			cout <<"Aluno Aprovado para teste" <<"\n";
	}
	else
	{
	}
system ("pause");
return 0;
}
