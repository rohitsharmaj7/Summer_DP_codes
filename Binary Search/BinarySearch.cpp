#include<iostream>
using namespace std;
int binarySearch(int a[],int low,int high,int target)
{
	while(low<high)
	{
		int mid=(low+high)/2;
		
		if(target==a[mid])
		{
		   return mid;
		}
		else if(target<a[mid])
		{
			high=mid-1;
			return binarySearch(a,low,high,target);
		}
		else if(target>a[mid])
		{
			low=mid+1;
			return binarySearch(a,low,high,target);
		}	
	}
	return -1;
}
int main()
{
	int n,element;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cin>>element;
	int result=binarySearch(array,0,n-1,element);
	cout<<result;
}
