#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
node* createnode(int data)
{
 	struct node* temp=new node;
	temp->data=data;
 	temp->left=NULL;
 	temp->right=NULL;
 	return temp;
}

node* createbst(struct node* mynode,int data)
{
	if(mynode==NULL)
		return createnode(data);
	
	if(mynode->data>data)
	  mynode->left =createbst(mynode->left,data);
	if(mynode->data<data)
	  mynode->right =createbst(mynode->right,data);
}
int main()
{
	struct node *root=NULL;
	root=createbst(root,10);
	createbst(root,5);
	createbst(root,12);

	cout<<root->data<<" "<<root->left->data<<" "<<root->right->data;
	
}
