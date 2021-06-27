#include<stdio.h>
#include<string.h>
void main()
{
  char str[50];
  int i,n,total[50]={0};
  printf("enter the string:");
  gets(str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
      if(str[i]==32)
        continue;
      if(str[i]>96)
      {
          total[str[i]-97]++;
      }
      else
      {

          total[str[i]-65]++;
      }
 }
 for(i=0;i<26;i++)
  {

    if(total[i]==0)
    {
      printf("The given string is not pangram");

    }
  }
    printf("the given string is pangram");



}
