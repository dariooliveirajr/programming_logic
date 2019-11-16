#include <iostream>
using namespace std;
int main()
{ 
	double F,G,A,S,D,M,D1;
	cout<< "Digite o primeiro numero: ";
	cin >> G;
	cout<< "Digite o segundo numero: ";
	cin >> F;
	A=(G+F);
	S=(G-F);
	D=(G/F);
	D1=(F/G);
	M=(G*F);
	cout << "A Soma dos numeros digitados e: " <<A<<"\n";
	cout << "A Subtracao dos numeros digitados e: " <<S<<"\n";
	cout << "A Divisao do pimeiro numero pelo segundo e: " <<D<<"\n";
	cout << "A Divisao do pimeiro numero pelo segundo e: " <<D1<<"\n";
	cout << "A multiplicacao dos numeros digitados e: " <<M<<"\n";
system ("pause");
return 0;
}
