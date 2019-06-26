#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* link;
};
struct node *head=NULL;
void insertAtEnd()
{
	int item;
  	struct node* p;
  	p=(struct node*)malloc(sizeof(struct node));
  	
	cin>>item;
  	p->data=item;
  	
	if(head==NULL)
  	{
  		p->link=NULL;
  		head=p;
  		cout<<"Node Inserted"<<endl;
	}
	else
	{
		struct node* temp;
		temp=(struct node*)malloc(sizeof(struct node));
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=p;
		p->link=NULL;
		cout<<"Node inserted"<<endl;
	}
}
void displayList()
{
	int count=0;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	while(temp->link!=NULL)
	{
		cout<<temp->data<<"-->";
		temp=temp->link;
		count++;
	}
	cout<<temp->data<<"-->";
	cout<<temp->link;
	
	cout<<endl<<"Total nodes : "<<count+1;
	
	
	cout<<endl<<"Middle Element is :"<<endl;
	struct node* temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	temp1=head;
	for(int i=1;i<=(count)/2;i++)
	{
		temp1=temp1->link;
	}
	cout<<temp1->data;
}

int main()
{
 q:	
  int n;
  cin>>n;
  switch(n)
  {
    
	case 1:
	{
	  insertAtEnd();
	  goto q;	
	}	
	case 2:
	{
	  displayList();
	  goto q;		
	}
	default:
	{
			break;
	}
	
  }	
  
}
