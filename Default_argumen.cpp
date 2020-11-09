#include<iostream>
using namespace std;

double volume_kubus(double p=4,double l=3,double t=2);

int main(){
	cout<<volume_kubus(3,4,5)<<endl;
	cout<<volume_kubus(3,4)<<endl;
	cout<<volume_kubus(2)<<endl;
	cout<<volume_kubus();
	
}
double volume_kubus(double p,double l,double t){
	return p*l*t;
}
