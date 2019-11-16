#include <iostream>
#include <string>
using namespace std;
int main()
{
	string CG,ES;
	int TP;
	cout <<"Digite o Tempo de servico(Em anos completos): ";
	cin >>TP;
	cin.ignore();
	cout<<"Digite o cargo(em letras minusculas e sem pontuacao): ";
		getline(cin,CG);
	cout<<"Digite a escolaridade(em letras minusculas e sem pontuacao): ";
		getline(cin,ES);
	if(TP>5 && CG=="analista de suporte" && ES=="ensino superior completo")
	{
		cout <<"Funcionario promovido" <<"\n";
	}
	else
	{
	}
system ("pause");
return 0;
}
