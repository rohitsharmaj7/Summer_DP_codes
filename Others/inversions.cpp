#include<iostream>
using namespace std;

int merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	int L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	i = 0; 
	j = 0; 
	k = l; 
	int count=0;
	
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 		
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
			count+=(n1-i);
		} 
		k++; 
	} 

	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
	
	return count;
} 

int mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 
		int left=mergeSort(arr, l, m); 
		int right=mergeSort(arr, m+1, r); 
		int overlap=merge(arr, l, m, r); 
		return left+right+overlap;
	} 
	return 0;
} 

void printArray(int A[], int size) 
{ 
	for (int i=0; i < size; i++) 
		cout<<A[i]<<" ";  
} 

int main() 
{ 
	 
	int arr_size;
	cin>>arr_size;
    int arr[arr_size];
	for(int i=0;i<arr_size;i++)
	{
	  cin>>arr[i];	
	}
	cout<<endl;
	cout<<mergeSort(arr, 0, arr_size - 1)<<endl; 
	printArray(arr, arr_size);  
} 
