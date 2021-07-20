#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,j,key;
	cout<<"enter array size:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter key value:";
	cin>>key;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==key)
			{
				cout<<"["<<i<<","<<j<<"]";
			}
		}
	}
}
