#include<iostream>
using namespace std;
int main()
{
	int a[30],n,i,key,found=0;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
	   cin>>a[i];	
	}
	cout<<"enter key value:";
	cin>>key;
	for(i=0;i<n;i++)
	{
	   if(key==a[i])
	   {
	     found=1;
		 break;	
	   }	
	}
	if(found==1)
	{
	  cout<<"value found at index " << i ;	
	}	
	else
	{
		cout<<"value not found";
	}
	
}
