#include <iostream>
using namespace std;
int main()
{
	string N;
	int QA;
	double PU,D,TP,T,Q;
	cout << "Digite o nome do produto: ";
	getline (cin,N);
	cout << "Digite a quantidade adquirida: ";
	cin >> QA;
	cin.ignore();
	cout << "Digite o preco unitario: ";
	cin >> PU;
	cin.ignore();
	T=QA*PU;
	if (QA<=5)
	{
		D=(T*2)/100;
		TP=T-D;
		cout << "Valor da compra: " << " R$"<< T <<"\n";		
		cout << "O desconto e de: : " << " R$"<< D <<"\n";
		cout << "O total a pagar sera: " << " R$"<< TP <<"\n";
	}
	else{
		if (QA>5&&Q<=10)
		{
			D=(T*3)/100;
			TP=T-D;
		cout << "Valor da compra: " << " R$"<< T <<"\n";		
		cout << "O desconto e de: : " << " R$"<< D <<"\n";
		cout << "O total a pagar sera: " << " R$"<< TP <<"\n";
		}
		else {
		if(QA>10){
		
			D=(T*5)/100;
			TP=T-D;
		cout << "Valor da compra: " << " R$"<< T <<"\n";		
		cout << "O desconto e de: : " << " R$"<< D <<"\n";
		cout << "O total a pagar sera: " << " R$"<< TP <<"\n";
	}
		else
		{
			D=0;
			D=(T*5)/100;
			TP=T-D;
		cout << "Valor da compra: " << " R$"<< T <<"\n";		
		cout << "O desconto e de: : " << " R$"<< D <<"\n";
		cout << "O total a pagar sera: " << " R$"<< TP <<"\n";
		}
	}
	}
	cout<<"\n";
	system ("pause");
	return 0;
}
