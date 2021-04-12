#include<stdio.h>
void main()
{
 int i,n,pos,value,arr[50];
 printf("enter the size of array:");
 scanf("%d",&n);
 printf("enter the elements in array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("enter the element position to insert:");
 scanf("%d",&pos);
 printf("enter the value to insert:");
 scanf("%d",&value);
 for(i=n-1;i>=pos-1;i--)
 {
  arr[i+1]=arr[i];

 }
 arr[pos-1]=value;
 n++;
 printf("after insertion the array elements are:");
 for(i=0;i<n;i++)
 {
     printf("%d\t",arr[i]);

 }
}
