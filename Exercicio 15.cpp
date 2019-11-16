#include <iostream>
using namespace std;
int main()
{
	double VE, C, VA, D;
	cout << "Digite o valor do equipamento: " ;
	cin >> VE;
	D=(VE*10)/100;
	VA=VE-D;
	cout <<"O valor atualizado e: " << VA <<"\n";
system ("pause");
return 0;
}
