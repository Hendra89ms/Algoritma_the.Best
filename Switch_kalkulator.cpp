#include<iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char kalkulator;
	
	cout<<"\t Program kalkulator \n ";
	cout<<"==================================\n";
	cout<<"Berapa angka pertama = ";
	cin>>a;
	cout<<"Masuk kan Operator = ";
	cin>>kalkulator;
	cout<<"Berapa angka kedua = ";
	cin>>b;
	
	switch(kalkulator)
	{ 
		case '+':
		hasil=a+b;
		cout<<a<<kalkulator<<b<<"="<<hasil;
		break;
		
		case '-':
		hasil=a-b;
		cout<<a<<kalkulator<<b<<"="<<hasil;
		break;
		
		case '*':
		hasil=a*b;
		cout<<a<<kalkulator<<b<<"="<<hasil;
		break;
		
		case '/':
		hasil=a/b;
		cout<<a<<kalkulator<<b<<"="<<hasil;
		break;
		
		default: 
		cout<<"Operator anda salah \n";
		break;
	}
}
