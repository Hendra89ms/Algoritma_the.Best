#include <iostream>

using namespace std;

int main()

    {

    int i,n,batas=10,jumlah;

    cout<<"program menampilkan perkalian bilangan"<<endl;

    cout<<"======================================"<<endl;  

    cout<<"Bilangan yang akan dikalikan : ";

    cin>>n;

    cout<<"======================================"<<endl;

    cout<<"Menampilkan Hasil Perkalian :"<<endl;

    for(i=1;i<=batas;i++)

    {

    jumlah=i*n;

    cout<<i<<"*"<<n<<"="<<jumlah<<endl;

    } 
}
