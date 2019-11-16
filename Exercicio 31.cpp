#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float a, b ,c;
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
	if (a>b || a>c){
		if (b>c){
			cout << "O menor numero e: " << c;
		}
		else {
			cout << "O menor numero e: " << b;
		}
	}
	else {
		cout << "O menor numero e: " << a;
	}
	cout << endl << endl;
	system ("pause");
	return 0;
}
