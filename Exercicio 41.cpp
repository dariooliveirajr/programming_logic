#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL,"");
	int A;
	A=1;
	while (A<101)
	{
		cout<<A;
		if (A==1 or A==20 or A==30 or A==40 or A==50 or A==60 or A==70 or A==80 or A==90 or A==10 or A==100)
		{
			cout<<" - Múltiplo de 10 - ";
		}
		cout<<endl;
		A=A+1;
	}
	system("pause");
	return 0;
}
