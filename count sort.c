#include<stdio.h>
void main()
{
	int a[20],b[20],count[20]={0},i,j,k,n,temp;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("the array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				temp=a[j];
				k=a[j];
			}
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		++count[a[i]];
	}
	for(i=1;i<=k;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		b[--count[a[i]]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
	   	printf("%d",a[i]);
		
	}
	
}
