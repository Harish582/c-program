#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,j,x,y;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
	   cin>>a[i];	
	}
	x=a[0],y=a[1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]*a[j]>x*y)
			{
				x=a[i];
				y=a[j];
			}
		}
	}
	cout<<"maximum product pair is {"<<x<<","<<y<<"}";
}
