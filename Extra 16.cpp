#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float n1, n2, n3, me, ma;
	//comandos
	cout << "Digite a nota da primeira avaliacao do aluno" <<"\n";
	cin >> n1;
	cin.ignore();
	cout << "Digite a nota da segunda avaliacao do aluno" <<"\n";
	cin >> n2;
	cin.ignore();
	cout << "Digite a nota da terceira avaliacao do aluno" << "\n";
	cin >> n3;
	cin.ignore();
	cout << "Digite a media dos exercicios que fazem parte da avaliacao" <<"\n";
	cin >> me;
	cin.ignore();
	ma=(n1 + (n2 * 2) + (n3 * 3) + me) / 7;
	if (ma>=9){
		cout << "A nota do conceito do aluno e: A"; 	
	} 
	else {
		if (ma>=7.5&&ma<9){
			cout << "A nota do conceito do aluno e: B";
		}
		else{
			if (ma>=6&&ma<7.5){
				cout << "A nota do conceito do aluno e: C";
			}
			else{
				cout << "A nota do conceito do aluno e: D";
			}
		}
		
	}
	cout <<"\n";
	system ("pause");
	return 0;
}
