#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,max,x;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter extra candy:";
	cin>>x;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]+x>=max)
		{
			cout<<"true"<<" ";
		}
		else
		{
			cout<<"false"<<" ";
		}
	}
}
