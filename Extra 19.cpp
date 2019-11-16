#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	char C;
	setlocale(LC_ALL,"");
	cout<<"Digite:"<<endl<<"A - Para exibir a mensagem de bom dia."<<endl<<"B - Para exibir a mensagem de boa tarde."<<endl<<"C - Para exibir a mensagem de boa Noite."<<endl;
	cin>>C;
	switch(C)
	{
		case 'A': cout<<"BOM DIA"<<endl;system ("pause");
			break;
		case 'B':cout<<"BOA TARDE"<<endl;system ("pause");
			break;
		case 'C':cout<<"BOA NOITE"<<endl; system ("pause");
			break;
		default:cout<<"                  ERRO"; system("@ping 127.0.0.1 -n 2 -w 1000 > nul");
	}
	return 0;
}
