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
        if(j>=i && (i+j)<=2*n)
         printf("*");
        else
         printf(" ");
          }
     printf("\n");
    }
}

