#include<iostream>
#include<array>

using namespace std;

int main(){
	array <int, 5> nilai;
	for(int i=1; i<=4; i++){
		nilai [i]=i;
		cout<<"nilai ["<< i <<"] = "<<nilai [i] << " addres nya : "<< &nilai [ i ]<< endl;
	}
	cout<<endl;
	//Ukuran array 
	cout<<"ukuran : "<<nilai.size()<<endl;
	//addres awal dari array
	cout<<"Ukuran Awal : "<<nilai.begin()<<endl;
	//addres akhir dari array
	cout<<"Ukuran Akhir : "<<nilai.end()<<endl;
	//nilai dengan index
	cout<<"Nilai ke : "<<nilai.at(2) <<endl;
	
}
