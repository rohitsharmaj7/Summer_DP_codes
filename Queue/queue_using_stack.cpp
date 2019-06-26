#include<iostream>
#include<stack>
using namespace std;
stack<int> s1;
stack<int> s2;
void enqueue(int x)
{
	while(!s1.empty())
	{
		int n=s1.top();
		s2.push(n);
		s1.pop();
	}
	s1.push(x);
	cout<<"pushed successfully";
    while(!s2.empty())
    {
    	s1.push(s2.top());
    	s2.pop();
	}
}

int dequeue()
{
	if(s1.empty())
	{
		cout<<"queue empty";
	}
	
	int n=s1.top();
	s1.pop();
	return n;
}
int main()
{
  cout<<"Enter 1 to Push into Queue\nEnter 2 to pop from queue\nEnter 3 to display Queue:"<<endl;
  q:
	int ch,item;
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			cout<<"Enter item to insert:"<<endl;
			cin>>item;
			enqueue(item);
			goto q;
		}
		case 2:
		{
		    cout<<dequeue()<<" Popped successfully";
		    goto q;
		}	
	}
}
