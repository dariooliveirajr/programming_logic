#include <iostream>
using namespace std;
int main()
{
	//variaveis
	int H1, H2, M1, M2, A, B;
	//comandos
	cout << "Digite a idade do primeiro homem: ";
	cin >> H1;
	cin.ignore();
	cout << "Digite a idade da primeira mulher: ";
	cin >> M1;
	cin.ignore();
	cout << "Digite a idade do segundo homem: ";
	cin >> H2;
	cin.ignore();
	cout << "Digite a idade da segunda mulher: ";
	cin >> M2;
	cin.ignore();
	if (M1>M2){
		if (H1>H2){
			A=H1+M1;
			B=H2*M2;
			cout << "A soma das idades do homem mais velho com a da mulher mais nova e: " <<A <<"\n";
			cout << "O produto das idades do homem mais novo e com a da mulher mais velha e: " << B<<"\n";
		}
		else{
			A=H2+M2;
			B=H1*M1;
			cout << "A soma das idades do homem mais velho com a da mulher mais nova e: " << A <<"\n";
			cout << "O produto das idades do homem mais novo e com a da mulher mais velha e: " << B<<"\n";
		}
	}
	else {
		if (H1>H2){
			B=H2*M2;
			A=H1+M1;
			cout << "A soma das idades do homem mais velho com a da mulher mais nova e: " << B <<"\n";
			cout << "O produto das idades do homem mais novo e com a da mulher mais velha e: " << A;
		}
		else{
			B=H1*M2;
			A=H2+M1;
			cout << "A soma das idades do homem mais velho com a da mulher mais nova e: " << B <<"\n";
			cout << "O produto das idades do homem mais novo e com a da mulher mais velha e: " << A;
		}
	}
	cout <<"\n";
	system ("pause");
	return 0;
}
