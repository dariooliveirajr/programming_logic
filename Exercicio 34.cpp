#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float a, b, c;
	//comandos
	cout << "Digite um lado do triangulo" << endl;
	cin >> a;
	cin.ignore();
	cout << "Digite outro lado do triangulo" << endl;
	cin >> b;
	cin.ignore();
	cout << "Digite o lado retante do triangulo" << endl;
	cin >> c;
	cin.ignore();
	if (a==b==c){
		cout << "Triangulo equilatero";
	}
	else {
		if (a==b&&a!=c||a==c&&a!=b||b==c&&a!=b){
			cout << "Triangulo isoceles ";
		}
		else {
			cout << "Triangulo escaleno";
		}
	}
	cout << endl << endl;
	system("pause");
	return 0;
}
