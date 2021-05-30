#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,j;
	cout<<"enter array size:";
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
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+((a[a[i]])%n)*n;
		
	}
	for(i=0;i<n;i++)
	{
	  a[i]=a[i]/n;	
	}
	cout<<"The resultant array is:";
	for(i=0;i<n;i++)
	{
	 cout<<a[i];	
    }
}
