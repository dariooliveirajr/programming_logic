#include <iostream>
using namespace std;
int main()
{
	double K,Y;
	cout <<"Digite a quantidade de horas: ";
	cin >>K;
	if(K>40)
	{
		Y=(K-40);
		cout <<"O numero de horas extras e: "<< Y <<"\n";
	}
	else
	{
		Y=0;
		cout <<"O numero de horas extras e: "<< Y <<"\n";
	}
system ("pause");
return 0;
}
