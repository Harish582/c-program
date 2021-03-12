#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
     {
        if(i==j || i==1 || j==1 || j==n || j==1 || j==n || i+j==n+1 || i==n)
         printf("*");
        else
         printf(" ");
          }
     printf("\n");
    }
}

