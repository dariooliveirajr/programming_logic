#include <iostream>
using namespace std;
int main(){
	int N,cont=1,R;
	cout<<"Digite um numero: ";
	cin>>N;
	for(cont=0;cont<=10;cont++){
		R=N*cont;
	cout<<cont<<"x10= "<<R<<endl;
	}
	system ("pause");
	return 0;
}
