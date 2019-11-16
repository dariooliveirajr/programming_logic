#include <iostream>
using namespace std;
int main(){
	int N,H,G,F,B;
	
	for(F=0;F<=5;F++){
		cout<<"Digite um numero entre 1 e 1000: ";
		cin>>N;
		
		
			if(N>1000){
				cout<<"NUMERO INVALIDO"<<endl;
				F=6;
			}
			else{
				
				if(N<1){
					cout<<"NUMERO INVALIDO"<<endl;
					F=6;
				}
				
				else{
					
					if(N<B){
					G++;
					}
					else{
					B=N;
					}
					
				}
			}
			
	}
	
	cout<<"O menor numero aparece: "<<G<<" vezes"<<endl;
	system("pause");
	return 0;
}
