#include<stdio.h>
void main()
{
	int i,a[50],n,temp,j;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
	
	if(a[i] < a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
}
  printf("The ascending order is");
  for(i=0;i<n;i++)
  {
  	printf(" %d",a[i]);
  }
	printf("\n second largest is %d",a[1]);
}
