#include <iostream>
#include <string>
using namespace std;
int main(){
	int i,A,N,M=0,MM=0;
	string F;
	for(i=0; i<20; i++){
		cout<<"\n\nDigite o nome: ";
		cin>>F;
		cout<<"Digite a idade: ";
		cin>>A;
		cout<<"Digite o sexo (0 Para Masculino) - (1 para Feminino): ";
		cin>>N;
		
		switch(N){
			case 0:
				M++;
				break;
			case 1:
				MM++;
				break;
			default:
				cout<<"ERRO";
				break;
		}
		
	}
	cout<<endl<<"O total de homens e: "<<M<<", O total de mulheres e: "<<MM<<endl;
	system ("pause");
	return 0;
}
