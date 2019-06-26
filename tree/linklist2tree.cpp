#include<iostream>
#include<queue>
using namespace std;
void insertAtBegin();
void display();

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

struct binarytree
{
	int value;
	struct binarytree *left;
	struct binarytree *right;
};
struct binarytree*root=NULL;

binarytree* newBinaryTreeNode(int data) 
{ 
    binarytree *temp = new binarytree; 
    temp->value = data; 
    temp->left = temp->right = NULL; 
    return temp; 
}

void insertAtBegin()
{
	int item; 
    struct node *ptr;  
	ptr = (struct node*) malloc(sizeof(struct node));  

	if(ptr == NULL)
    {  
        cout<<"OVERFLOW";
    }  
    else  
    {  
        cout<<"Enter value :"<<endl;   
        cin>>item;    
        ptr->data = item;
		ptr->next = head;    
		head = ptr;   //key statement for the insertion at the beginning
        cout<<"Node inserted"<<endl;
    }  
} 
void inorder(struct binarytree* a)
{
	if(a==NULL) return;
	inorder(a->left);
	cout<<a->value<<" ";
	inorder(a->right);
}

void levelordertraversal(struct binarytree *ptr)
{ 
   if(ptr==NULL)
     return;
    
   queue<binarytree*> q;	
   q.push(ptr);
   
   while(!q.empty())
   {	 
   	 int x=q.size();
   	 while(x--)
   	 {
   	 	binarytree* temp=q.front();
   	 	cout<<temp->value<<" ";
   	 	if(temp->left!=NULL)
   	 		q.push(temp->left);	
		if(temp->right!=NULL)
			q.push(temp->right);
   	 	q.pop();
	 }
   }
   
}

void convert(struct node* head,struct binarytree *root)
{
	queue<binarytree*> q;
	struct binarytree* b; 
    
	if (head == NULL) 
    { 
        root = NULL;
        return; 
    } 
    root = newBinaryTreeNode(head->data); 
    b=root;
    q.push(root); 
    head = head->next; 

    while(head) 
    { 
        binarytree* parent = q.front(); 
        q.pop(); 
        binarytree *left = NULL, *right = NULL; 
        left = newBinaryTreeNode(head->data); 
        q.push(left); 
        head = head->next; 
        if (head) 
        { 
            right= newBinaryTreeNode(head->data); 
            q.push(right); 
            head = head->next; 
        } 
        parent->left = left; 
        parent->right = right; 
    } 
    
    levelordertraversal(b);
}

void display()
{      
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        cout<<"Nothing to print";
    }  
    else  
    {  
        cout<<"Link list is:"<<endl;   
        while (ptr!=NULL)  
        {  
            cout<<ptr->data<<" "; 
            ptr = ptr -> next;  
        }  
    }       
    cout<<endl;
}


int main()
{
	q:
      int n;
      cout<<"Press 1 to insert node at the beginning\nPress 2 to display the link list\n";
      cin>>n;
      switch(n)
      {
      	  case 1:
      	  {
      	  	insertAtBegin();
			goto q;	
		  }
		  case 2:
		  {
		  	display();
		  	convert(head,root);
			break;	
		  }
		  default:
		  {
		  	cout<<"Wrong Choice";	
		  }
	  }
}
