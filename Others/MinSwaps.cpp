#include<iostream>
using namespace std;
int minSwaps(int a[],int n)
{ 
	int vis[n]={0};
	int cycle_size=0; 	
	for(int i=1;i<=n;i++)
	{	
		if (vis[i]==1) 
			continue; 
		cycle_size = 1; 
		int value = a[i];
		vis[i]=1; 
		while(i!=value) 
		{
		   cycle_size++;
		   vis[value]=1;
		   value=a[value]; 
	    }	
	}
	return (cycle_size-1);	
}
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=1;i<=n;i++)
	{
		cin>>array[n];
	}
	
	int ans=minSwaps(array,n);
	cout<<ans;
}
