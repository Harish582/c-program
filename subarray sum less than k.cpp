#include<iostream>
using namespace std;
int main()
{
	int a[30],n,i,j,k,sum=0,count=0;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	cout<<"Enter k value:";
	cin>>k;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=i;j<n;j++)
		{
			if(sum+a[j]<k)
			{
				sum=sum+a[j];
				count++;
			}
			else
			{
				break;
			}
	   
	   }
    
	}
	cout<<"res is:"<<count;
}
