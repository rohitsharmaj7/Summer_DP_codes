// C++ program to remove the duplicates from the array. 
#include<iostream> 
#include<unordered_map> 
using namespace std; 
void removeDups(int arr[], int n) 
{ 
    unordered_map<int, bool> mp; 
    for (int i = 0; i < n; ++i) { 
        if (mp.find(arr[i]) == mp.end()) { 
            cout << arr[i] << " "; 
        } 
        mp[arr[i]] = true; 
    } 
} 
  
int main() 
{ 
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	  cin>>arr[i];
	} 
    removeDups(arr, n);  
} 
