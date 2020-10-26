#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	cout<<" \t Program seleksi Timnas u-22 \n";
	cout<<"=====================================\n";
	
	string yt;
	float umur,tinggi,fisik,teknik;
	string hasil;
	
	cout<<"Apakah Anda pemain Bola ? ";
	cin>>yt;
	
	if(yt=="ya")
	{
		cout<<"\n";
		cout<<"Silahkan Tes ! \n";
		cout<<"\n";
		
		cout<<"Tes Umur = ";
		cin>>umur;
		if(umur>=18 && umur<=22)
		hasil="Lolos";
		else
		hasil="Tidak Lolos";
		cout<<hasil<<"\n";
		
		cout<<"Tes tinggi = ";
		cin>>tinggi;
		if(tinggi>=168)
		hasil="Lolos";
		else
		hasil="Tidak Lolos";
		cout<<hasil<<"\n";
		
		
		cout<<"Tes Bermain = ";
		cin>>teknik;
		if(teknik>70)
		 hasil="Lolos";
		else
		hasil="Tidak Lolos";
		cout<<hasil<<"\n";
		
	    cout<<" Tes fisik = ";
	    cin>>fisik;
	    if(fisik>=70)
	    hasil="Lolos";
	    else
	    hasil="Tidak Lolos";
	    cout<<hasil<<"\n";
		
	}
	else{
		cout<<" Anda tidak lolos";
	}
	cout<<"Anda tidak lolos ";
}
