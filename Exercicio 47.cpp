#include <iostream>
using namespace std;
int main(){
	int A,B=0,N1,N2,M,R=0,AP=0,MM;
	do{
		cout<<"Digite a primeira nota do aluno: ";
		cin>>N1;
		cout<<"Digite a segunda nota do aluno: ";
		cin>>N2;
		MM=(N1+N2)/2;
		if(MM>5){
			cout<<"Aluno Aprovado";
			AP++;

		}
		else{
			cout<<"Aluno Reprovado";
			R++;
		}
		cout<<endl<<"Digite 0 para continuar, e 1 para encerrar"<<endl;
		cin>>A;
		switch(A)
		{
			case 0:
				B=1;
				break;
			case 1:
				B=0;
				break;
		}
	}while(B!=0);
	cout<<"Alunos Aprovados: "<<AP<<endl<<"Alunos Reprovados: "<<R<<endl;
	system("pause");
	return 0;
}
