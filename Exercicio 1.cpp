#include <iostream>
#include <string>
using namespace std;
	int main()
	{
		string CDP;
		int QDP;//Vari�veis
		double VDP, T;//Vari�veis
		cout << "Codigo do cliente: " ;
		cin >> CDP;
		cout << "Digite a Quantidade de Pecas: " ;
		cin >> QDP;
		cout << "Digite o Valor da Peca: " ;
		cin >> VDP;
		T=QDP*VDP;//Processamento
		cout << "Codigo do cliente: " << CDP << "\n";
		cout << "Valor Total: " <<T << "\n";//Resultado
		system("pause");	
		return 0;
	}
