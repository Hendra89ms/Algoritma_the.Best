#include<iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char kalkulator;
	
	
	cout<<"\t Program Kalkulator \n";
	cout<<"===================================\n";
	cout<<" masukkan pertama = ";
	cin>>a;
	cout<<"  Pilih Operator = ";
	cin>>kalkulator;
	cout<<" Masukkan kedua = ";
	cin>>b;
	cout<<a<<kalkulator<<b;
	
	if(kalkulator== '+'){
		hasil=a+b;}
	else if(kalkulator=='-'){
	hasil=a-b;
	}else if(kalkulator=='*'){
	hasil=a*b;
	}else if(kalkulator=='/'){
	hasil=a/b;
	}else{
		cout<<"Operator salah";}
	cout<<"="<<hasil ;
	

}
