#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,n,d,temp;
	cout<<"enter array size:";
	cin>>n;
	cout<<"enter array elments:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	cout<<"enter no of times rotate:";
	cin>>d;
	for(i=0;i<d;i++)
	{
		temp=a[n-1];
		for(j=n-1;j>=0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=temp;
	}
	cout<<"after rotation the array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	
}
