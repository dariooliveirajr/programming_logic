#include<iostream>
using namespace std;
int R;
int calc (int A,int B);
int main(){
	int N1,N2;
	cin>>N1;cin.ignore();
	cin>>N2;cin.ignore();
	calc (N1,N2);
	cout<<R;
	system ("pause");
	return 0;
}
int call(int A, int B){
	R=A+B;
	return 0;
}
