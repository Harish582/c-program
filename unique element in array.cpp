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
	int temp=a[0];
	for(i=1;i<n;i++)
	{
		temp=temp^a[i];
	}
	cout<<"unique element in the array is:"<<temp;
}
