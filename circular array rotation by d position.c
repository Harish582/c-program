#include<stdio.h>
void main()
{
	int a[50],i,n,d,l,j,k;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number of rotation:");
	scanf("%d",&d);
	for(j=0;j<d;j++){	
	l=a[n-1];
	for(i=n-1;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=l;
}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

