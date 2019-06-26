#include<iostream>
using namespace std;
int main()
{
	int n,target;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cin>>target;
	
	for(int i=0;i<n;i++)
	{
		int sum=abs(target-array[i]);
		cout<<"Difference is: "<<sum;
	}
}
