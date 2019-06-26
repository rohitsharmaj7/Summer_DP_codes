//top recursive concept
#include<iostream>
using namespace std;
int waytoreach(int n,int a[],int i)
{
   if(i==n-1)
    return 1;	 
   int number=a[i];
   int p=0;
   for(int k=1;k<=number && i+k<n;k++)
   {
   	 p+=waytoreach(n,a,i+k);
   }
   return p; 
}
int main()
{
  int n;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++)
  {
  	cin>>array[i];
  }
  cout<<waytoreach(n,array,0);	
}
