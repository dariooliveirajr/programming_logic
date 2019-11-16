#include <iostream>
using namespace std;
int main()
{ 
	double PP,A,M,B;
	cout<< "Digite o preco do produto: ";
	cin >> PP;
	A=(PP*10)/100;
	B=(PP-A);
	cout << "Um produto custava: R$"<<PP<<" Com um desconto de 10%, seu novo preco e: R$"<<A<<"," <<"\n"<<"e ele esta: R$"<<B<<" mais barato." <<"\n";
system ("pause");
return 0;
}
