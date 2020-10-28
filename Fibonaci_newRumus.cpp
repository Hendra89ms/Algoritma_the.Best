#include<iostream>
using namespace std;

int main()
{
	int n;
	int f_n, f_n1, f_n2;
	
	cout<<"Program Deret Fibonacci \n ";
	cout<<"Masukkan Nilai n = ";
	cin>>n;
	
	f_n1=1;
	f_n2=0;
	cout<<f_n1<<endl;
	
	for(int i=1;  i<n;  i++){
	 f_n=f_n1+f_n2;
	 f_n2=f_n1;
	 f_n1=f_n;
	 cout<<f_n<<endl;
	}
	 
}
