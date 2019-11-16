#include <iostream>
using namespace std;
int main()
{
int P, M, G;
double VP, VM, VG, T;
	cout << "Digite a quantidades de camisetas P: ";
	cin >> P;
	cout << "Digite a quantidades de camisetas M: ";
	cin >> M;
	cout << "Digite a quantidades de camisetas G: ";
	cin >> G;
	VP=(P*15);
	VM=(M*20);
	VG=(G*25);
	T=VP+VM+VG;
	cout << "O Valor total: " <<T <<"\n";
	
system ("pause");
return 0;
}
