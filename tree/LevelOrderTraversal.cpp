#include<iostream>
#include<queue>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

node* newnode(int data)
{
	node *temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;	
	return temp;
}

void levelordertraversal(struct node *ptr)
{ 
   if(ptr==NULL)
     return;
   queue<node*> q;	
   q.push(ptr);
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
	node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5); 
	levelordertraversal(root);
}
