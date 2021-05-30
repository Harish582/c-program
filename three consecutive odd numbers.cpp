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
		cout<<a[i];
	}
	for(i=2;i<n;i++)
	{
		if((a[i]%2==1) && (a[i-1]%2==1) && (a[i-2]%2==1))
		{
			cout<<"the element is"<<a[i]<<a[i-1]<<a[i-2];
		}
		
		
	}
}
