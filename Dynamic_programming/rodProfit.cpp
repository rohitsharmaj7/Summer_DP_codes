#include<iostream>
using namespace std;
int maxmyprofit(int N,int a[])
{	
 if(N==0)
 	return 0;
 
 int answer=0;
 for(int i=0;i<N;i++)
 {
 	int p=maxmyprofit(N-i-1,a);
 	answer=max(answer,p+a[i]);
 }
 return answer;
}
int main()
{
	int l;
	cin>>l;
	int cost[l];
	for(int i=0;i<l;i++)
		cin>>cost[i];
	cout<<maxmyprofit(l,cost);
}
