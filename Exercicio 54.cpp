#include<iostream>
#include<string>
using namespace std;
int main(){
	int G;
	int A[10];
	for (G=0;G<=9;G++){
		cout<<"Digite algo: ";
		cin>>A[G];
	}
	for (G=9;G>=0;G--){
		cout<<A[G]<<endl;
	}
	system("Pause");
	return 0;
	
}
