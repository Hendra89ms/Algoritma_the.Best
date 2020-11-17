#include<iostream>
using namespace std;

void fungsi(int *b){
	cout<<"Nilai b : "<< b<<endl;
	cout<<"Alamat dari b : "<< *b<<endl;
}
void kuadrat(int *valPtr){
	*valPtr = (*valPtr)*(*valPtr);
}
int main(){
	int a=5;
	cout<<"   nilai a : "<<a<<endl;
	cout<<"addres dari a : "<< &a<<endl;
	
	// fungsi (&a);
	kuadrat (&a);
	cout<<"Kuadrat a : "<< a <<endl;
	
}
