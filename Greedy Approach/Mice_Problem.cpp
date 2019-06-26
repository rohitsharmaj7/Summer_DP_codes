#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int sum=0,ourmin=INT_MIN;
	int hole[5]={2,3,5,7,9};
	int mouse[5]={1,4,6,8,10};
	
	sort(hole,hole+5);
	sort(hole,hole+5);
	
	for(int i=0;i<5;i++)
	{
		sum+=min(ourmin,abs(mouse[i]-hole[i]));
	}
	cout<<sum;
}
