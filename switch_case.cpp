#include <iostream>
using namespace std;

int main()
{
	int makan;
	cout<<" Mau makan apa ? ";
	cin>>makan;
	
	switch(makan){
		case 1:
		cout<<" Bakso ";
		break;
		case 2:
		cout<<" Mie Ayam ";
		break;
		case 3:
		cout<<" Sate ";
		break;
		case 4:
		cout<< " Pizza ";
		break;
		default:
		cout<<" Ayoklah makan apa aja ! ";
		break;
	}
}
