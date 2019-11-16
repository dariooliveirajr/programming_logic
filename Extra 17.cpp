#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double A,B,C,D,X1,X2,RD;
	cout<<"Digite o valor de A: ";
	cin>>A;
	cout<<"Digite o valor de B: ";
	cin>>B;
	cout<<"Digite o valor de C: ";
	cin>>C;
	D=(B*B)-4*A*C;
	if(D>0)
	{
	X1=(-B+sqrt(D))/2*A;
	X2=(-B-sqrt(D))/2*A;
	cout<<"X'="<<X1<<endl;
	cout<<"X''="<<X2<<endl;
	}
	else
	{
		if(D==0)
		{
		X1=B/2*A;
		cout<<"A Equação possui uma raiz real, X="<<X1<<endl;
		}
		else
		{
			cout<<"A Equação não possui raizes reais, pois o delta calculado foi negativo"<<endl;
		}
	}
system ("pause");
return 0;
}






