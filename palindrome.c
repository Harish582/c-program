#include<stdio.h>
void main()
{
 int n,r,sum=0,temp;
 printf("enter the n value:");
 scanf("%d",&n);
 temp=n;
 while(n>0)
 {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
 }
   n=temp;
   if(n==sum)
      printf("It is a palindrome number");
   else
    printf("It is not a palindrome number");

}
