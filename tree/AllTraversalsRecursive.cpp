#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
node* insertnode(int data)
{
	struct node* temp=new node;
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

void inordertraversal(struct node *root)
{
	if(root==NULL)
		return;
    inordertraversal(root->left);
    cout<<root->data;
    inordertraversal(root->right);
}

void preordertraversal(struct node *root)
{
	cout<<endl;
	if(root==NULL)
		return;
	cout<<root->data;
    inordertraversal(root->left);
    inordertraversal(root->right);
}
void postordertraversal(struct node *root)
{
	cout<<endl;
	if(root==NULL)
		return;
    inordertraversal(root->left);
    inordertraversal(root->right);
    cout<<root->data;
}
int main()
{
	struct node *root=insertnode(5);
	root->left=insertnode(3);
	root->right=insertnode(4);
	root->left->left=insertnode(7);
	root->left->right=insertnode(9);
	
	inordertraversal(root);
	preordertraversal(root);
	postordertraversal(root);
}
