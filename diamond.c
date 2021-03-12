#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
    {
    for(j=1;j<=2*n;j++)
     {
        if(i+j>=2*n+1 || j-i<=1)
         printf("*");
        else
         printf(" ");
          }
     printf("\n");
    }
}

