#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,n,temp;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
