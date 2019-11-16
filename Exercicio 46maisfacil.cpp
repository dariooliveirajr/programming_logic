#include <iostream>
using namespace std;
int main ()
{	
	int cont,A,B,V;
	A=0;
	B=0;
	do{
		//cout<<"Digite 1 para continuar, 0 para encerrar o programa. \n";
		//cin>>V;
			//switch(V){
			//	case 0:
			//		cont++;
			//		break;
			//	case 1:
					cout<<"Digite um numero inteiro: ";
					cin>>A;
					B=B+A;
			//		cout<<"A soma dos numeros inteiros e: "<<B<<"\n";
			//		break;
			//} 
	}while(A!=0);
			cout<<"A soma dos numeros inteiros e: "<<B<<"\n";
			
	system("pause");
	return 0;
}
