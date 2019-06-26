#include<iostream>
using namespace std;
int median(int a1[],int n)
{
  	if (n % 2 == 0) 
        return (a1[n / 2] +  a1[n / 2 - 1]) / 2; 
    else
        return a1[n / 2]; 
}
int getMedian(int a1[],int a2[],int n)
{
   if(n<=0)
     return -1;	
   if (n == 1) 
        return (a1[0] +  a2[0]) / 2; 
   if (n == 2) 
        return (max(a1[0], a2[0]) +  min(a1[1], a2[1])) / 2;   
                
   int m1=median(a1,n);
   int m2=median(a2,n);
   
   if(m1==m2)
   	 return m1;
   if(m1<m2)
   {
   	 if(n%2==0)
    	 return getMedian(a1 + n / 2 - 1, a2 , n - n / 2 + 1); 
     
	 return getMedian(a1 + n / 2,  a2, n - n / 2);
   }
   else if(m1>m2)
   {
	    if (n % 2 == 0) 
          return getMedian(a2 + n / 2 - 1,  a1, n - n / 2 + 1); 
        return getMedian(a2 + n / 2,  a1, n - n / 2); 
   }
                
}
int main()
{
	int n;
	cin>>n;
	int array1[n],array2[n];
	for(int i=0;i<n;i++)
    	cin>>array1[i];
	for(int i=0;i<n;i++)
		cin>>array2[i];
	int result=getMedian(array1,array2,n);
	cout<<result;
}
