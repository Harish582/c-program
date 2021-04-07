#include<stdio.h>
#include<string.h>
void main()
{
  char str[50];
  int i,n,total=0;
  printf("enter the string:");
  gets(str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
    {
      total++;

    }

 }

 if(total==26)
 {
  printf("The given string is pangram");

 }
 else
 {
 printf("It is not a pangram");

 }





}
