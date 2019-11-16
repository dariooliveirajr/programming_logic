#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float a, b;
	//comandos
	cout << "Digite um numero" << endl;
	cin >> a;
	cin.ignore();
	cout << "Digite outro numero" << endl;
	cin >> b;
	cin.ignore();
	if (a==b){
		cout << "Os numeros sao iguais";
	}
	else {
		if (a>b){
			cout << "O primeiro e maior";
		}
		else{
			cout << "O segundo e maior";
		}
	}
	cout << endl << endl;
	system ("pause");
	return 0;
}
