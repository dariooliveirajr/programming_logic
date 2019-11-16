#include <iostream>
#include <string>
using namespace std;
int main()
{
	string NM, CG;
	cout <<"Digite o nome do funcionario: ";
		getline(cin,NM);
		cout <<"Digite o cargo sem letra maiusula e/ou acento/pontuacao: ";
			getline(cin,CG);
	if(CG=="escrivao" || CG=="contabilista")
	{
		cout <<"Funcionario do bloco A" <<"\n";
	}
	else
	{
	}
system ("pause");
return 0;
}
