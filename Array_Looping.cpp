#include<iostream>
#include<array>
using namespace std;

int main(){
	array <int, 10>arrayNilai = {0,1,2,3,4,5,6,7,8,9};
	for(int nilai: arrayNilai){
		cout<<"Addres "<< &nilai << " Nilai nya "<< nilai<<endl;
	}
	cout<<endl;
	
	for(int &nilaiRef : arrayNilai){
		nilaiRef *=2;
	}
	cout<<endl;
	
	for(int &nilaiRef : arrayNilai ){
		cout<<"Address "<<&nilaiRef<<" Nilai nya "<<nilaiRef <<endl;
	}
}
