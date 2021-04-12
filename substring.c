
#include<stdio.h>
void main()
{
    char str1[50],str2[50];
    int n1,n2,count=0,count1=0,i,j;
    printf("Enter the string : ");
    gets(str1);
    printf("Enter the sub string :");
    gets(str2);
    n1=strlen(str1);
    n2=strlen(str2);
    j=n2;
    for(i=0;i<n1;i++)
    {
       for(j=0;j<n2;j++)
       {
           if(str1[i+j]!=str2[j])
           {
               break;
           }
       }
      if(j==n2)
      {
        printf("\nIt is a substring");
        break;
      }
      else
      {
          if(i==n1-1)
          printf("\nIt is not a sub string");
      }
    }
}
