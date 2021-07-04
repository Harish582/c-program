#include<iostream>
using namespace std;

int ss(int a[],int n)
{
	int i,min,second_min;
	min=a[0];
	second_min=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			second_min=min;
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<second_min && a[i]!=min)
		{
			second_min=a[i];
		}
	}
	return second_min;
	
	
}

int sl(int a[],int n)
{
	int i,max,second_max;
	max=a[0];
	second_max=a[1];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			second_max=max;
			max=a[i];
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>second_max && a[i]!=max)
		{
			second_max=a[i];
		}
	}
	return second_max;
	
	
}
int main()
{
	int a[20],n,i,second_smallest,second_largest;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	second_smallest=ss(a,n);
	cout<<"second smallest element:"<<second_smallest<<endl;
	second_largest=sl(a,n);
	cout<<"second largest element:"<<second_largest<<endl;
	
}
