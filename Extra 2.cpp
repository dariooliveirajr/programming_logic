#include <iostream>
using namespace std;
int main()
{ 
	double R, A, V, Z;
	cout<< "Digite o valor do raio do cilindro: ";
	cin >> R;
	cout<< "Digite o valor da altura do cilindro: ";
	cin >> A;
	Z=R*R;
	V=3.14*Z*A;
	cout << "O volume do cilindro e: " <<V<<"\n";
	
system ("pause");
return 0;
}
