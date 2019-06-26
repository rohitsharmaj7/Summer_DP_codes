#include<iostream>
using namespace std;
bool checkAnagram(char* c1,char* c2)
{
   int count1[256]={0};
   int count2[256]={0};
   int i;
   for(i=0;c1[i] && c2[i];i++)
   {
   	 count1[c1[i]]++;
   	 count2[c2[i]]++;
   }
   
   if (c1[i] || c2[i]) 
        return false;	
   
   for(i=0;i<256;i++)
   {
   	if(count1[i]!=count2[i])
   	   return false;	
   }
   
   return true;
}

int main()
{
	char s1[]="rohit";
	char s2[]="orhit";
	if(checkAnagram(s1,s2))
	  cout<<"Anagrams";	
	else
	  cout<<"Not Anagrams";
}
