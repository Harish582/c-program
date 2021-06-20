#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,j,k,count=0;
	cout<<"enter array size:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if((a[i]+a[j]>a[k]) && (a[i]+a[k]>a[j]) && (a[k]+a[j]>a[i]))
				{
					count++;
				}
			}
		}
	}
	cout<<"total no of trinagles possible is "<< count;
}
