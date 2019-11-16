#include <iostream>
using namespace std;
int main()
{
	int QA,QM,QN,QMM;
	cout<<"Digite a quantidade maxima em estoque: ";
	cin>>QM;
	cout<<"Digite a quantidade minima em estoque: ";
	cin>>QN;
	cout<<"Digite a quantidade atual em estoque: ";
	cin>>QA;
	QMM=(QM+QN)/2;
	cout<<"A Quantidade media de estoque e: "<<QMM<<endl;
	if(QA>=QMM)
	{
		cout<<"Não efetuar compra"<<endl;
	}
	else
	{
		cout<<"Efetuar compra"<<endl;
	}
system("pause");
return 0;
}
