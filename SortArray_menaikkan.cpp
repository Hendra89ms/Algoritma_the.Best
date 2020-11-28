#include<iostream>
using namespace std;
int main()
{
Cout<<"Program SortArray Menaikkan"<<endl;
int array[] = {10, 35, 85, 93, 62, 77, 345, 43, 2, 10};
int n = sizeof(array)/sizeof(array[0]);
// 'sizeof 'memberikan ukuran total array yaitu ukuran setiap karakter * no. karakter
// jadi untuk mendapatkan no. karakter
// kita membagi sizeof (array) dengan ukuran salah satu karakter dari array
// ini dia array [0]
sort(array, array+n);
cout << "nArray setelah menyortir menggunakan urutan default"<<endl;
cout<<"adalah n : ";
for (int i = 0; i < n; ++i)
cout << array[i] << " ";
return 0;
}
