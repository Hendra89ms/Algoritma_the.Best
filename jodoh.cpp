#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<"\t Program Cari Jodoh \n";
	cout<<"===================================== \n";
	
	string jenkel; //Jenis kelamin
	int umur;
	string ct; //cocok atau tidak cocok
	
	cout<<" Jenis kelamin : ";
	cin>>jenkel;
	
	if(jenkel=="wanita" || jenkel=="pria")
	{
		cout<<"Berapa Umur mu ? ";
		cin>>umur;
		if(umur >= 21)
			ct=" Sesuai ";
		else 
			ct=" Tidak Sesuai ";	
		}
			
	else{
		cout<<"Tidak sesuai ";
	}
	cout<<"Anda "<<ct<<"Dengan Kriteria saya\n";
	
}
