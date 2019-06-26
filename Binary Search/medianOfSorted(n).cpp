//median using n complexity
#include<iostream>
using namespace std;
int mergeArrays(int a1[],int a2[],int n)
{
	int i=0,j=0,count,m1=-1,m2=-1;
	for(count=0;count<=n;count++)
	{
		if(i==n)
		{
			m1=m2;
			m2=a2[0];
			break;
		}
		else if(j==n)
		{
			m1=m2;
			m2=a1[0];
			break;
		}
		
		if(a1[i]<a2[j])
		{
			m1=m2;
			m2=a1[i];
			i++;
		}
		else
		{
			m1=m2;
			m2=a2[j];
			j++;
		}
	}
	return (m1+m2)/2;
}
int main()
{
	int n;
	cin>>n;
	int array1[n],array2[n];
	cout<<"Enter elements for array 1:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array1[i];
	}
	cout<<"Enter elements for array 2:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array2[i];
	}
	int result=mergeArrays(array1,array2,n);
	cout<<result;
}
