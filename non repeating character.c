#include<stdio.h>
#include<string.h>
void main()
{
  int i,j,len,flag;
  char str[50];
  printf("enter the string:");
  gets(str);
  len=strlen(str);

  for(i=0;i<len;i++)
  {
    flag=0;
    for(j=0;j<len;j++)
    {
     if((str[i]==str[j])&&(i!=j))
     {
       flag=1;
       break;

     }

    }
    if(flag==0)
    {
      printf("The  first non repeating character is %c",str[i]);
      break;

    }

  }



}
