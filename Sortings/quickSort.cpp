#include<iostream>
using namespace std;
int quickSortPivotElement(int array[],int low,int high)
{
	int temp;
	int pivot=array[low];
	int i=high+1;
	for(int j=high;j>=low;j--)
	{
		if(array[j]<pivot)
		{
			i--;
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	temp=array[i-1];
	array[i-1]=array[high];
	array[high]=temp;
	return(i-1);
}

void qsort(int a[],int l,int r)
{
	if(l<r)
	{
	 int index=quickSortPivotElement(a,l,r);
	 qsort(a,l,index-1);
	 qsort(a,index+1,r);
    }
}

void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
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
  qsort(array,0,n);
  print(array,n);
}
