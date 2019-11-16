#include <iostream>
#include <string>
using namespace std;
int main()
{
int HR;
double VD, P, A;
	cout <<"Digite o total de horas trabalhadas: ";
	cin >>HR ;
	cout <<"Digite o valor de desconto: ";
	cin >>VD ;
	P=(HR*20);
	A=(P-VD);
	cout <<"Salario Bruto: " <<P <<endl;
	cout <<"Salario Liquido: " <<A <<endl;
system ("pause");
return 0;
}
