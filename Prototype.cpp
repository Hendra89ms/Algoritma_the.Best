#include<iostream>
using namespace std;

double ht_luas(double p,double l);
void print(double x);

int main()
{
	int panjang,lebar,luas;
	cout<<"panjang = ";
	cin>>panjang;
	cout<<"Lebar = ";
	cin>>lebar;
	luas=ht_luas(panjang,lebar);
	
	print(luas);
}
double ht_luas(double p,double l){
	return p*l;
}
void print (double x){
	cout<<"hasil = "<< x<<endl;
}
