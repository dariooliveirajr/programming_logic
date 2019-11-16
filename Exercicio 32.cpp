#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float a, b, c;
	//comandos
	cout << "Digite um numero" << endl;
	cin >> a;
	cin.ignore();
	cout << "Digite outro numero" << endl;
	cin >> b;
	cin.ignore();
	cout << "Digite mais um numero" << endl;
	cin >> c;
	cin.ignore();
	if (a>b){
		if (a>c){
			if(b>c){
				cout << "A ordem crescente dos numeros e: " << c  << ", "<< b << ", " << a;
			}
			else {
				cout << "A ordem crescente dos numeros e: " << b  << ", "<< c << ", " << a;
			}
		}
		else {
			cout << "A ordem crescente dos numeros e: " << b << ", "<< a << ", " << c;
		}
	}
	else {
		if(c>a){
			if (b<c){
				cout << "A ordem crescente dos numeros e: " << a  << ", "<< b << ", " << c;
			}
			else{
				cout << "A ordem crescente dos numeros e: " << a  << ", "<< c << ", " << b;
			}
		}
		else{
			cout << "A ordem crescente dos numeros e: " << c  << ", "<< a << ", " << b;
		}
	}
	cout << endl << endl;
	system ("pause");
	return 0;
}
