#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
	int AB, AC, AD, AE, AF, SS;
	cout<<"Digite um n�mero: ";
	cin>>AB;
	cout<<"Digite outro n�mero: ";
	cin>>AC;
	cout<<"Digite outro n�mero: ";
	cin>>AD;
	cout<<"Digite outro n�mero: ";
	cin>>AE;
	cout<<"Digite outro n�mero: ";
	cin>>AF;
	SS=AB+AC+AD+AE+AF;
	cout<<"A soma de todos os n�meros �: "<<SS;
	return 0;
}

