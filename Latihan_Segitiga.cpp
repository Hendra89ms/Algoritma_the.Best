#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Masukkan Batas Nilai N = ";
	cin>>n;
	
	for(int a=1; a<=n; a++){
		for(int b=n; b>a; b--){
			cout<<" ";
		}
		for(int b=1; b<=(2*a-1); b++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=2; a<=n; a++){
		for(int b=1; b<a; b++){
			cout<<" ";
		}
		for(int b=n; b>=(2*a-n); b--){
			cout<<"*";
		}
		cout<<endl;
	}	
}
