#include <iostream>
#include <locale.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL,"");
	int I;
	cout<<"Digite a idade do nadador: ";
	cin>>I;
	switch(I)
	{
		case 5:
		case 6:
		case 7:
			cout<<"Infantil A";
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			cout<<"Infantil B";
			break;
		case 12:
		case 13:
			cout<<"Juvenil A";
			break;
		case 14:
		case 15:
		case 16:
		case 17: 
			cout<<"Juvenil B";
			break;
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25: 
			cout<<"Adulto";
			break;
	}
	return 0;
	system("pause");
}
