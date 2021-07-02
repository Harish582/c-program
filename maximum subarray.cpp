#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,j,sum=0,m=0,l=0;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int largest=a[0];
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			sum=sum+a[j];
			if(sum>largest)
			{
				m=i;
				l=j;
				largest=sum;
			}
		}
	}
	cout<<"The largest contiguos array is:";
	for(i=m;i<=l;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	cout<<"the largest sum is:"<<largest;
	
}
	
	
	
	
	
	
	
	
	
	

