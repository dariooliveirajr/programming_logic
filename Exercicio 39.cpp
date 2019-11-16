#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL, "");
	char P;
	double S,ST,PP,DD;
	cout<<"Digite o valor do salário: ";
	cin>>S;
	cout<<"T- Técnico"<<endl<<"E- Engrenheiro"<<endl<<"G- Gerente"<<endl<<"O- Outra"<<endl;
	cout<<"Digite a inicial da profissão (Em Letra maiúscula): ";
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
cout<<"Antigo Salário: "<<S<<endl<<"Novo Salário: "<<ST<<endl<<"Diferença: "<<DD;
	return 0;
	system ("pause");
}
