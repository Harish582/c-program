#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    for(j=1;j<=2*n-1;j++)
     {
        if(i+j<=2*n && i+j>=n+1)
         printf("*");
        else
         printf(" ");
          }
     printf("\n");
    }
}

