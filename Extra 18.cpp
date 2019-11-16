#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL,"");
	int A;
	cout<<"Digite a quantidade de acertos do aluno: ";
	cin>>A;
	switch(A)
	{
		case 0: 
		case 1:
		case 2:
		case 3:
		case 4:
			cout<<"Nota E";
			break;
		case 5:
		case 6:
			cout<<"Nota D";
			break;
		case 7:
		case 8:
			cout<<"Nota C";
			break;
		case 9:
		case 10:
			cout<<"Nota B";
			break;
		case 11:
		case 12:
			cout<<"Nota A";
			break;
		default:cout<<"ERRO, QUANTIDADE INVÁLIDA";
	}
	return 0;
	system("pause");
}
