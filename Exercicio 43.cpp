#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
double M,N,A;
cout<<"Digite um numero:";	
cin>>N;
cout<<"Digite um numero:";	
cin>>M;
A=0;
while(A<2)
{

if(N>M)
{
	cout<<"Digite um numero:";
	cin>>M;
}
else
{
	cout<<"Digite um numero:";
	cin>>N;
}
A=A+1;
}

if(N>M)
{
	cout<<"O maior n�mero �: ";
	cout<<N<<endl;
}
else
{
	cout<<"O maior n�mero �: ";
	cout<<M<<endl;
}
system("pause");
return 0;
}
