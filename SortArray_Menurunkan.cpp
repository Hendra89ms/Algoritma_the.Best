#include <iostream>
using namespace std;   
int main() 
{ 
cout<<"Program SortArray Menurunkan"<<endl;
cout<<"-----------------------------"<<endl;
int array[] = {41, 53, 4, 459, 60, 7, 23, 4, 232, 10}; 
int n = sizeof(array)/sizeof(array[0]); 
sort(array, array+n, greater<int>());   
cout << "Array setelah di sorting : "; 
for (int i = 0; i < n; ++i) 
cout << array[i] << " ";   
return 0; 
} 
