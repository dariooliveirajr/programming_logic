#include <iostream>
using namespace std;
int main()
{
	int Q;
	cout<<"Digite a quantidade de torcedores no estadio: ";
	cin>>Q;
	//Cálculos
	if(Q>22000 && Q<25000)
	{
		cout<<"A quantidade de torcedores no estadio e: "<<Q<<"\n"<<"Obs. O numero de torcedores ultrapassa a zona de risco delimitada pelo corpo de bombeiros.";
	}
	else
	{
		cout<<"A quantidade de torcedores no estadio e: "<<Q<<"\n"<<"Obs. O numero de torcedores NAO ultrapassa a zona de risco delimitada pelo corpo de bombeiros.";
	}
return 0;
system ("pause");
}
