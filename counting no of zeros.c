#include<stdio.h>
void main()
{
  int i,n,count=0,temp,res;
  printf("enter the no:");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    temp=i%10;
    res=temp;
    if(res==0)
    {
        count++;
    }

  }
  printf("no of zeros in the given limit is %d",count);


}
