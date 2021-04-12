#include<stdio.h>
void main()
{
 int i,n,pos,arr[50];
 printf("enter the size of array:");
 scanf("%d",&n);
 printf("enter the elements in array:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("enter the element position to delete:");
 scanf("%d",&pos);
 for(i=pos-1;i<n-1;i++)
 {
  arr[i]=arr[i+1];
 }
 n--;
 printf("after deletion the elements of array is:");
 for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);

 }


}
