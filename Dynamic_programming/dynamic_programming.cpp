//Dynamic programming
#include<iostream>
using namespace std;
int dp[100]={0};
int p=0;
int rec(int answer,int N,int step1,int step2)
{
	if(answer==N)
	{
	  return 1;
	}
	if(answer>N)
		return 0;
	if(dp[answer]!=0)
	{
	  return dp[answer];	
	}	
	
	int l=rec(answer+step1,N,step1,step2);
	int r=rec(answer+step2,N,step1,step2);
	dp[answer]=l+r;
	return l+r;
}

int main()
{
	int n,s1,s2;
	cin>>n>>s1>>s2;
	cout<<rec(0,n,s1,s2);
}
