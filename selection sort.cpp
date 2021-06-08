#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,temp,n,min;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"the array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<"the resultant array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
