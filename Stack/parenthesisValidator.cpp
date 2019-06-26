#include<iostream>
#include<stack>
using namespace std;
stack<int> mystack;
int checkstring(string s)
{
    for(int i=0;i<s.length();i++)
	{
	   if(s[i]=='(' || s[i]=='{' || s[i]=='[')
	   {
	    mystack.push(s[i]);   	
       }	
       if(s[i]==')' || s[i]=='}' || s[i]==']')
       {
          if(mystack.top()=='(' && s[i]==')' || mystack.top()=='{' && s[i]=='}' || mystack.top()=='[' && s[i]==']')
          {
          	mystack.pop();
		  }
	   }
	}	
	
	if(mystack.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
  string s="[()]";
  int a=checkstring(s);
  cout<<a;
}
