#include <iostream>
using namespace std;
	int A;
	int calc(int A);
int main(){

	cout<<"Digite um numero: ";
	cin>>A;
	calc(A);
	system("pause");
	return 0;
}

int calc(int A){
	int B,C;
	for(B=1;B<=10;B++){
		C=B*A;
		cout<<B<<"x"<<A<<"= "<<C<<endl;
	}
		return 0;
}
