#include<iostream>
#include<vector>
using namespace std;
int p=0;
vector<int> removeDuplicates(vector<int> &a,int n)
{
  for(int i=0;i<n;i++)
  {
    if(a[i]!=a[i+1])
	{
	  a[++p]=a[i+1];	
	}	
  }
  
  return a;
}

int main()
{
	int n,number;
	cin>>n;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		cin>>number;
		vec.push_back(number);
	}
	
	int size=vec.size()-1;
	vector<int> result=removeDuplicates(vec,size);
	for(int i=0;i<p+1;i++)
	{
		cout<<result[i];
	}
}
