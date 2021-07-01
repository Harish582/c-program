#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,total;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	total=(n+1)*(n+2)/2;
	for(i=0;i<n;i++)
	{
		total=total-a[i];
	}
	cout<<"The missing number is:"<<total;
}
