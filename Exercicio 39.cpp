#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "");
	char P;
	double S,ST,PP,DD;
	cout<<"Digite o valor do sal�rio: ";
	cin>>S;
	cout<<"T- T�cnico"<<endl<<"E- Engrenheiro"<<endl<<"G- Gerente"<<endl<<"O- Outra"<<endl;
	cout<<"Digite a inicial da profiss�o (Em Letra mai�scula): ";
	cin>>P;
	switch (P)
		{
			case 'T': 
			PP=S*30/100;
			ST=S+PP;
			break;
			
			case 'G': 
			PP=S*10/100;
			ST=S+PP;
			break;
			
			case 'E': 
			PP=S*20/100;
			ST=S+PP;
			break;
			
			default:ST=S+40;
		}
		DD=ST-S;
cout<<"Antigo Sal�rio: "<<S<<endl<<"Novo Sal�rio: "<<ST<<endl<<"Diferen�a: "<<DD;
	return 0;
	system ("pause");
}
