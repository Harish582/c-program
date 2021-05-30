#include<stdio.h>
void main()
{
	int a[20],n,i,j,c=0;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("the array is:");	
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		
	}
	for(i=0;i<n;i++)
	{
	  c=0;
	  for(j=i+1;j<n;j++)
	  {
	  	if(a[i]==a[j])
	  	c++;
	  }	
	  if(c==0)
        printf("the res  is %d",a[i]);
	}
	
	
	
}
