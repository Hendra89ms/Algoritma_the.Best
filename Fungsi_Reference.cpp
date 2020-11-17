#include<iostream>
using namespace std;

void fungsi(int &b){
	b=10;
	cout<<"Nilai b : "<< b<<endl;
	cout<<"Alamat dari b : "<< &b<<endl;
}
void kuadrat(int &nilaiRef){
	nilaiRef= nilaiRef * nilaiRef;
}
int main(){
	int a=5;
	cout<<"   nilai a : "<<a<<endl;
	cout<<"addres dari a : "<< &a<<endl;
	
	// fungsi (&a);
	kuadrat (a);
	cout<<"Nilai a : "<< a <<endl;
	
}
