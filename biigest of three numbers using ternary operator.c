#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 (a>b&&a>c)?printf("a is big"):(b>c)?printf("B is big"):printf("C is big");

}
