#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* root=NULL;

node* newnode(int data)
{
	struct node* tem=new node;
	tem->data=data;
	tem->left=NULL;
	tem->right=NULL;
	return tem;
}
void mirror(struct node* mynode)  
{ 
    if (mynode == NULL)  
        return;  
    else
    { 
        struct node* temp; 
        mirror(mynode->left); 
        mirror(mynode->right); 
        
		temp     = mynode->left; 
        mynode->left = mynode->right; 
        mynode->right = temp; 
    } 
} 
void printtree(struct node*n)
{
   if(n==NULL) return;
   cout<<n->data<<" ";
   printtree(n->left);
   printtree(n->right);	
}
int main()
{
   struct node *temp;
   temp=newnode(1);
   temp->left=newnode(2);
   temp->right=newnode(3);
   temp->left->left=newnode(4);
   temp->left->right=newnode(5);
   
   printtree(temp);	
   mirror(temp);
   cout<<endl<<"After mirroring"<<endl;
   printtree(temp);
}
