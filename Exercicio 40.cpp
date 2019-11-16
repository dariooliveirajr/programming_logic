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
		cout<<"=======    "<<A<<"    ======="<<endl;
		A=A+1;
	}
system ("pause");
return 0;
}
