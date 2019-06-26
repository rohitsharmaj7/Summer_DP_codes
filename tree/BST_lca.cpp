#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node*left;
	struct node*right;
};
node* mynewnode(int data)
{
	struct node* temp=new node;
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}

struct node* lca(struct node* mytemp,int n1,int n2)
{
   if(mytemp==NULL)
     return NULL;
   
   if(mytemp->data>n1 && mytemp->data>n2)
     return lca(mytemp->left,n1,n2);
   if(mytemp->data<n1 && mytemp->data<n2)
     return lca(mytemp->right,n1,n2);
   
   return mytemp;	 	 	 	
}

int main()
{
	struct node* answer;
	struct node* root=mynewnode(10);
	root->left=mynewnode(6);
	root->left->left=mynewnode(4);
	root->left->left->right=mynewnode(5);
	root->right=mynewnode(12);
	root->right->left=mynewnode(11);
	root->right->right=mynewnode(13);
	int n1=7;
	int n2=5;
	answer=lca(root,n1,n2);
	cout<<answer->data;
}
