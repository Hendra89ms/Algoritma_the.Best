#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std; 
int main() 
{ 
vector<int> vec = { 10, 45, 60, 78, 23, 21, 30 };   
vector<int>::iterator iptr;   
partial_sort(vec.begin(), vec.begin() + 1, vec.end(), 
greater<int>()); 
iptr = vec.begin(); 
cout << "Elemen terbesarnya adalah = " << *iptr;   
return 0; 
} 
