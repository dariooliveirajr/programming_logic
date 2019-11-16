#include <iostream>
using namespace std;
int main ()
{
	int N,C=0,A=0,B=1,D=0,E;
	cout<<"Digite um numero natural: ";
	cin>>N;
	A=0;
	
	if(N==0){
		B=1;
	}
	
	else{
	do{
		B=B*2;
		A++;
	}while(A<N);
		
	}
	cout<<B<<endl;
	system("pause");
	return 0;
}
