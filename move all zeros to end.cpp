#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,count=0;
	cout<<"enter array size:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[count++]=a[i];
		}
	}
	while(count<n)
	{
		a[count++]=0;
	}
	cout<<"The resultant array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
