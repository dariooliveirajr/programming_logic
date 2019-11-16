#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float i;
	//comandos
	cout << "Digite a idade do nadador" << endl;
	cin >> i;
	cin.ignore();
	if (i>=5&&i<=7){
		cout << "O nadador pertence a categoria Infantil A";
	}
	else {
		if (i>=8&&i<=11){
			cout << "O nadador pertence a categoria Infantil B";
		}
		else{
			if (i>=12&&i<=13){
				cout << "O nadador pertence a categoria Juvenil A";
			}
			else{
				if (i>=14&&i<=17){
					cout << "O nadador pertence a categoria Juvenil B";
				}
				else {
					if (i>=18){
						cout << "O nadador pertence a categoria Adulta";
					}
					else {
						cout << "O nadador ainda nao pertence a nenhuma categoria";
					}
				}
			}
		}
	}
	cout << endl << endl;
	system ("pause");
	return 0;
}
