#include <iostream>
using namespace std;
int main()
{
	double W,H,KH,KHW,A;
	cout <<"Digite a potencia do aparelho em Watts: ";
	cin >>W;
	cout <<"Digite a quantidade de horas em funcionamento: ";
	cin >>H;
	cout <<"Digite o valor do KWh em reais: ";
	cin >>KH;
	KHW=W*H;
	A=KHW*KH;
	cout <<"O total de energia consumido pela maquina e: "<<KHW<<"Kw, e o valor total e: R$"<<A<<"\n";
	
system("pause");
return 0;	
}
