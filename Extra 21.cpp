#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
	int AB, AC, AD, AE, AF, SS;
	cout<<"Digite um número: ";
	cin>>AB;
	cout<<"Digite outro número: ";
	cin>>AC;
	cout<<"Digite outro número: ";
	cin>>AD;
	cout<<"Digite outro número: ";
	cin>>AE;
	cout<<"Digite outro número: ";
	cin>>AF;
	SS=AB+AC+AD+AE+AF;
	cout<<"A soma de todos os números é: "<<SS;
	return 0;
}

