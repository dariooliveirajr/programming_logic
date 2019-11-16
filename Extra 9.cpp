#include <iostream>
using namespace std;
int main()
{
	int D,A,N;
	cout<<"Digite o seu ano de nascimento: ";
	cin>>N;
	A=2016;
	D=(A-N);
	if(D>=16)
	{
		cout<<"Voce pode votar este ano!"<<"\n";
	}
	else
	{
		cout<<"Voce nao pode votar este ano!"<<"\n";
	}
system("pause");
return 0;
}
