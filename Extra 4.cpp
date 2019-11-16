#include <iostream>
using namespace std;
int main()
{ 
	double DST, TC,MD;
	cout<< "Digite a distancia percorrida em km: ";
	cin >> DST;
	cout<< "Digite a quantidade de litros de combustivel gasto: ";
	cin >> TC;
	MD=TC/DST;
	cout << "A media do consumo de litros gasto por km e: " <<MD<<"\n";
system ("pause");
return 0;
}
