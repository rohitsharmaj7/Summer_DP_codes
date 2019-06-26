#include<iostream>
#define MAX_SIZE 100
using namespace std;
int top=-1;
int array[MAX_SIZE];

void push(int x)
{	
  if(top==MAX_SIZE-1)
  {
  	cout<<"overflow";
  	return;
  }
   array[++top]=x;
}

void pop()
{
  if(top==-1)
  {
  	cout<<"underflow";
  }
  top--;
}

void stack()
{
	for(int i=0;i<=top;i++)
	{
	 cout<<array[i]<<" ";
    }
}

int main()
{
	q:
		
	int ch,item;
	cout<<"Enter your choice:\n1:To Push\n2:To Pop\n3:To Display"<<endl;
	cin>>ch;
	switch(ch)
	{
	   case 1:
	   {
	   	 cout<<"Enter the item to insert"<<endl;
	   	 cin>>item;
	     push(item);
		 goto q;	
	   }		
	   case 2:
	   {
	     pop();		
	   }
	   case 3:
	   {
	     cout<<endl;
		 cout<<"Displaying the stack:"<<endl;
		 stack();		
	   }
	}	
}
