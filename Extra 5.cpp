#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	string NM;
	int ID, I;
	cout<< "Digite seu nome: ";
	cin >> NM;
	cout << "Digite sua idade (Em anos completos): ";
	cin >> ID;
	I=ID*365;
	cout <<NM<<", "<<"Voce tem "<<I<<" Dias de vida" <<"\n";
system ("pause");
return 0;
}
