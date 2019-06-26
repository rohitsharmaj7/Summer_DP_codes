#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int noOfShows;
	cin>>noOfShows;
    int array[noOfShows]={0};
    int result[noOfShows];
    int starttime[noOfShows],endtime[noOfShows];
	
	for(int i=0;i<noOfShows;i++)
	{
		cin>>starttime[i]>>endtime[i];
	}
    
    int maximum=*max_element(endtime,endtime+noOfShows);
    
    for(int i=0;i<maximum;i++)
    {
    	array[starttime[i]]+=1;
    	array[endtime[i]+1]-=1;
	}
	
}
