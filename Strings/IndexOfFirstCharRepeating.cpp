#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="geeksforgeek";
	int count[255]={-1};
	int result=INT_MAX;
	for (int i = 0; i < 255; ++i)
      count[i] = -1;
	
	for(int i=0;i<str.length();i++)
	{
		if(count[int(str[i])]==-1)
		{
			count[str[i]]=i;
		}
		else
		{
			result=min(result,count[str[i]]);
		}
	}
	
	cout<<"Result : "<<str[result];
}
