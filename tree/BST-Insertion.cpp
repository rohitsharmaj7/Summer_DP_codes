#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* temp;

node* add(int data)
{
	struct node* temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

node* insertnode(struct node* ptr,int data)
{	
    if(ptr==NULL)
    	return add(data);
	
	if(ptr->data>data)
		ptr->left=insertnode(ptr->left,data);
	else
		ptr->right=insertnode(ptr->right,data);
}

void levelordertraversal(struct node* ptr)
{
	if(ptr==NULL) return;
	struct node*root=ptr;
	queue<node*>q;
	q.push(root);
	while(!q.empty())
	{
		int x=q.size();
		while(x--)
		{
			node* temp=q.front();
   	 	    cout<<temp->data<<" ";
   	 	    if(temp->left!=NULL)
   	 		  q.push(temp->left);	
		    if(temp->right!=NULL)
			  q.push(temp->right);
   	 	    q.pop();
		}
	}
}

int main()
{
	struct node* head=NULL;
	head=insertnode(head,7);
	insertnode(head,2);
	insertnode(head,9);
	levelordertraversal(head);
}
