#include<iostream>
using namespace std;
int main()
{
	int a[20],p[20],n,i,product=1;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
    {
      cin>>a[i];	
	}	
	for(i=0;i<n;i++)
	{
		product=product*a[i];
	}
	for(i=0;i<n;i++)
	{
		p[i]=product/a[i];
	}
	cout<<"The resultant array is:";
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	
}
