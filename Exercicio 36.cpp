#include <iostream>
using namespace std;
int main()
{
	//variaveis
	float c, n, ex, sb, sx, st;
	//comandos
	cout << "Digite o registro do funcionario \n";
	cin >> c;
	cin.ignore();
	cout << "Digite o numero de horas trabalhadas desse funcionario \n";
	cin >> n;
	cin.ignore();
	if (c<1000) {
		if(n>40){
			ex=n-40;
			sb=600;
			sx=ex*25;
			st=sx+sb;
		}
		else{
			ex=0.00;
			sb=n*15;
			sx=0.00;
			st=sx+sb;
		}
	}
	else {
		if(n>40){
			ex=n-40;
			sb=400;
			sx=ex*20;
			st=sx+sb;
		}
		else{
			ex=0.00;
			sb=n*10;
			sx=0.00;
			st=sx+sb;
		}
	}
	cout << "Registro do funcionario: " << c << "\nNumero de horas trabalhadas: " << n << "\nNumero de horas extras: " << ex << endl;
	cout << "Salario base: " << sb << "\nSalario excedente: " << sx << "\nSalario total: " << st << endl << endl;
	system ("pause");
	return 0;
}
