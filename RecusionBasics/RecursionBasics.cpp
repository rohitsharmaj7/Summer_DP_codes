#include<iostream>
#include<Math.h>
using namespace std;
int myrecusivefn(int n,int m)
{
	if(m%2==0)
	{
		return pow(myrecusivefn(n,m/2),2);
	}
	else
	{
		n*pow(myrecusivefn(n,(m-1)/2),2);
	}
}
int main()
{
	int answer=pow(2,7);
	cout<<answer;
}
