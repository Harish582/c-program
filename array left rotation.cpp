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
	cout<<"the array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"enter no of times rotate:";
	cin>>d;
	for(i=0;i<d;i++)
	{
		temp=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=temp;
    }

}  
