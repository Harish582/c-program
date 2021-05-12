#include<stdio.h>
void main()
{
   int arr[100],eve[100],odd[100],n,j,i,evencount=0,oddcount=0,temp;
   printf("Enter the number of elements : ");
   scanf("%d",&n);printf("enter the array elements:");

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("the array is : ");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i%2==0)
       {
           eve[evencount++]=arr[i];
       }
       else
       {
           odd[oddcount++]=arr[i];
       }
   }
    printf("\n");
   for(i=0;i<evencount;i++)
   {
       for(j=i;j<evencount;j++)
       {
           if(eve[i]>eve[j])
              {
                  temp=eve[i];
                  eve[i]=eve[i+1];
                  eve[i+1]=temp;
              }
       }
   }
    for(i=0;i<oddcount;i++)
   {
       for(j=i;j<oddcount;j++)
       {
           if(odd[i]>odd[j])
              {
                  temp=odd[i];
                  odd[i]=odd[i+1];
                  odd[i+1]=temp;
              }
       }
   }
   printf("\n");
   printf("The output is : %d",eve[evencount-2]+odd[oddcount-2]);
}
