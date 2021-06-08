#include<iostream>
using namespace std;
int main()
{
	int a[20],low,high,mid,n,i,key;
	cout<<"enter array size:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	cout<<"enter element to search:";
	cin>>key;
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
	if(a[mid]<key)
	{
		low=mid+1;
	}
	
	else if(a[mid]==key)
	{
		cout<<key <<"found at location" << mid+1;
		break;
	}
	else 
	{
		high=mid-1;
	}
	mid=(low+high)/2;
   }
}
