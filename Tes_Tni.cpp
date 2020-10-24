#include<iostream>

using namespace std;

int main()
{
	//Program tes masuk tni,jika tingginya 175 dan umurnya dibawah 21 tahun bisa masuk
	
	int tinggi;
	int umur;
	
	cout<<"\t -------Program Tes Tni-------- \n ";
	cout<<"=========================\n";

	 cout<<"Berapa tinggi anda = ";
	 cin>>tinggi;
	 cout <<"Berapa Umur Anda =";
	 cin>>umur;
	if(tinggi>=175 && umur<=21){
		cout<<"Selamat anda lolos";}
	else{ cout<<"Maaf anda tidak Lolos";
	}
}
