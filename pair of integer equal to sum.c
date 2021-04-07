#include <stdio.h>
void main()
{
int i,j,n,a[n] ,sum=10;
printf("enter the no of elements in array:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for( i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if((a[i]+a[j])==sum)
{
printf("%d + %d = %d\n",a[i],a[j],sum);
}
}
}

}
