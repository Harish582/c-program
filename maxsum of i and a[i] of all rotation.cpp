#include<iostream>
using namespace std;

int findmax(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}

int maxsum(int a[],int n)
{
	int i,j,sum=0,maxsum=0;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			int index=(i+j)%n;
			sum=sum+j*a[index];
		}
		maxsum=findmax(maxsum,sum);
	}
	return maxsum;
}
int main()
{
	int a[20],n,i;
	cout<<"enter array size:";
	cin>>n;
	cout<<"enter array elemets:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	cout<<"maximum sum is:"<<maxsum(a,n);
		
	
}
