#include <iostream>
using namespace std;
int main ()
{
	double N1, U2, M3, E4, T; //Variáveis
	cout << "Digite o primeiro numero: ";
	cin >> N1;
	cout << "Digite o segundo numero: ";
	cin >> U2;
	cout << "Digite o terceiro numero: ";
	cin >> M3;
	cout << "Digite o quarto numero: ";
	cin >> E4;
	T=(N1*N1)+(U2*U2)+(M3*M3)+(E4*E4); //Processamento
	cout << "Resultado: " << T <<"\n"; //Resultado
system ("pause");
return 0;
}
