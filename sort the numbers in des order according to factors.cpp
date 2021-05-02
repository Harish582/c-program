#include<stdio.h>
void main()
{
	int a[20],b[20],n,i,j,count=0;
	printf("enter no of elements in array:");
	scanf("%d",&n);
	printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);	

	}
	for(i=0;i<n;i++)
	{
      for(j=1;j<=a[i];j++)
      {
      	if(a[i]%j==0)
      	{
      	 count++;	
      		
		}
      	
      	
	  }
	  b[i]=count;
	  count=0;
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		if(b[i]>b[j])
            {
			int temp=b[i];
    		b[i]=b[j];
    		b[j]=temp;
    		int temp1=a[i];
    		a[i]=a[j];
    		a[j]=temp1;
    		
        	}
		}
	}
	
   	printf("The result is:\n");
   for(i=0;i<n;i++)
   {

   	printf("%d\t",a[i]);
   }
}
