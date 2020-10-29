#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Masukkan Nilai ke n = ";
	cin>>n;
	
	for(int a=1; a<=n; a++){
		for(int b=1; b<=a; b++){
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<"Pola ke 2 \n";
	for(int a=1; a<=n; a++){
		for(int b=n; b>=a; b--){
			cout<<"*";
		}
		cout<<"\n";
	}
	cout<<"Pola ke 3 \n";
	for(int a=1; a<=n; a++){
		for(int b=1; b<=a; b++){
			cout<<" ";
		}
		for(int b=n; b>=a; b--){
			cout<<"*";
		}
		cout<<"\n";
		}
		cout<<"Pola ke 4 \n";
		for(int a=1; a<=n; a++){
			for(int b=n; b>=a; b--){
				cout<<" ";
			}
			for(int b=1; b<=a; b++){
				cout<<"*";
			}
		cout<<"\n";
	}		
}
