#include <iostream>
#include <string>
using namespace std;
int main()
{
	string NPES;
	int AN, N;
	cout << "Digite seu nome: ";
	cin >> NPES;
	cout << "Digite seu ano de nascimento: ";
	cin >> AN;
	N=2016-AN;
	cout <<"Nome: " <<NPES <<"\n"<< "Idade: " << N <<"\n";
system ("pause");
return 0;
}
