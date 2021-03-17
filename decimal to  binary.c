#include<stdio.h>
void main()
{
	int n,j,k=0,a[100],rem;
	printf("enter the decimal number:");
	scanf("%d",&n);
	while(n!=0)
	{
		a[k]=n%2;
		n=n/2;
		k++;
	}
	for(j=k-1;j>=0;j--){
	
	printf("%d",a[j]);
}
}

