#include<stdio.h>
void main()
{
	int i,n,a=0,b=1,c,j;
	printf("enter n:");
	scanf("%d",&n);
    	for(i=1;i<=n;i++){
    	a=0;
	    b=1;
		c=0;

		for(j=1;j<=n;j++){
		  if(i>=j)
		  {
		   c=a+b;
		   printf(" %d",b);
		   a=b;
		   b=c;
	      }
}
printf("\n");
}
}


