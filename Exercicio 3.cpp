#include <iostream>
using namespace std;
int main()
{
	int QNE, QXE, EM;//Vari�veis
	cout << "Digite a Quantidade Minima de pecas: ";
	cin >> QNE;
	cout << "Digite a Quantidade Maxima de pecas: ";
	cin >> QXE;
	EM=(QNE+QXE)/2;//Processamento
	cout << "Estoque Medio: ";
	cout << EM <<"\n";//Resultado
system ("pause");
return 0;
}
