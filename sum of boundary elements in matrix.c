#include<stdio.h>
void main()
{
  int a[20][20],i,j,r,c,sum=0;
  printf("enter the rows and columns of matrix:");
  scanf("%d%d",&r,&c);
  printf("enter the elements in matrix:");
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=c;j++)
    {
     scanf("%d",&a[i][j]);

    }

  }

  for(i=1;i<=r;i++)
  {
    for(j=1;j<=c;j++)
    {
     printf("%d",a[i][j]);

    }

  }


  for(i=1;i<=r;i++)
  {
    for(j=1;j<=c;j++)
    {
      if(i==1 || j==1 || i==r || j==c)
     {
      sum=sum+a[i][j];

     }

    }

  }

printf("%d",sum);

}
