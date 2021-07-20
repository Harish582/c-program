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
		if(a[i]==0)
		{
			count=0;
		}
		else
		{
			count++;
		}
	}
	cout<<"res is"<<count;
}
