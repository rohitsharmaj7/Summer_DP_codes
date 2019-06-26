#include<iostream>
#include<vector>
using namespace std;
int rec(int answer,int N,int step1,int step2,vector<int> aa)
{
	int l,r;
	if(answer==N)
	{
	    for(int i=0;i<aa.size();i++)
	    {
	    	cout<<aa[i]<<" ";
		}
		return 1;
	}
	if(answer>N)
		return 0;	
	
	    aa.push_back(step1);	
	    l=rec(answer+step1,N,step1,step2,aa);
	    aa.pop_back();
	
	
		aa.push_back(step2);
	    r=rec(answer+step2,N,step1,step2,aa);
	    aa.pop_back();
    
	return (l+r);
}
int main()
{
	vector<int> a;
	int n,s1,s2;
	cin>>n>>s1>>s2;
	rec(0,n,s1,s2,a);
}
