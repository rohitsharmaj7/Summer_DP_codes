#include<iostream>
using namespace std;
int merge(int a[],int l,int m,int h)
{
	int s1=m-l+1;
	int s2=h-m;
	int left[s1],right[s2];
	
	for(int i=0;i<s1;i++)
		left[i]=a[l+i];
	for(int i=0;i<s2;i++)
	    right[i]=a[m+1+i];	
	    
	int i=0;
	int j=0;
    int k=l;
   	
	while(i<s1 && j<s2)
	{
	   if(left[i]<=right[j])
	     a[k]=left[i++];		
	   else
	   	 a[k]=right[j++];
	   k++;
	}  
	
	while(i<s1)
	  a[k++]=left[i++];	
	while(j<s2)
	  a[k++]=right[j++];
}
void mergesort(int a[],int low,int high)
{
  if(low<high)
  {
  	int mid=(low+high)/2;
  	mergesort(a,low,mid);
  	mergesort(a,mid+1,high);
  	merge(a,low,mid,high);
  }
}
void printArray(int a[],int size)
{
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	mergesort(array,0,n-1);
	printArray(array,n);
}
