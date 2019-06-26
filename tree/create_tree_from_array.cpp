//balanced binary search tree from the sorted array
#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

node* createtree(int a[],int left,int right)
{
	if(left<right)
	{
	int mid=(left+right)/2;
	struct node* temp=new node;
	temp->data=a[mid];
	cout<<a[mid]<<" ";
	temp->left=createtree(a,left,mid-1);
	temp->right=createtree(a,mid+1,right);
    
    return temp;
    }
    else
     return NULL;
}

int main()
{
  int array[9]={1,2,3,4,5,6,7,8,9};
  createtree(array,0,9);
}
