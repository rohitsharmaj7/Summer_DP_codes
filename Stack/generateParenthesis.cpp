#include<iostream>
using namespace std;
vector<int> generateParenthesis(string s,int n)
{
	vector<int> result;
    if(n==n/2)
    	return result;
    
	result.push_back(s);
	int left=1,right=0;
	
	if(left)
	{
	  left--;
	  generateParenthesis(')',n-1);
    }
}

bool checkValidity(int n)
{
	if(n%2!=0)
		return false;
	
	generateParenthesis("(",n);	
    return 1;
}

int main()
{
   int n;
   cin>>n;	
   bool answer=checkValidity(n);
   cout<<answer;
}
