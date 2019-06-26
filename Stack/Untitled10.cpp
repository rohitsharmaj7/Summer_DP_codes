#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n];
	int ans[n];
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	s.push(array[0]);
	
	for(int i=0;i<n;i++)
	{
		if(s.empty() || s.top()>array[i])
		{
			s.push(i);
		}
		else
		{
			while(!s.empty() && array[s.top()<array[i]])
			{
				ans[s.top()]=i;
				s.pop();
			}	
		}
		s.push(i);
	}
	
	for(int i=0;i<n-1;i++)
	{
		cout<<ans[i]<<" ";
	}
}
