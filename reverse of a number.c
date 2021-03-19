#include<stdio.h>
void main()
{
 int n,r,sum=0;
 printf("enter the n value:");
 scanf("%d",&n);
 while(n>0)
 {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
 }
 printf("The rev of a given num =%d",sum);
 }
