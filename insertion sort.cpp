#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,temp,n;
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
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
