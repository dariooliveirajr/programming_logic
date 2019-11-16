#include <iostream>
using namespace std;
int main()
{
	double CDL, VDS, RS; //Variáveis
	cout << "Digite a cotacao do dolar em Reais: ";
	cin >> CDL;
	cout << "Digite o valor a ser convertido: ";
	cin >> VDS;
	RS=(CDL*VDS);//Processamento
	cout << "Valor em Real: " << RS << "\n";//Resultado
system ("pause");
return 0;
}
