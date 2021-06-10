#include<stdio.h>  
void mergeSort(int[],int,int);  
void merge(int[],int,int,int);  
void main ()  
{  
    int a[30],i,n;  
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);	
    }
    mergeSort(a,0,n-1);  
    printf("printing the sorted elements");  
    for(i=0;i<n;i++)  
    {  
        printf("\n%d\n",a[i]);  
    }  
      
}  
void mergeSort(int a[], int low, int high)  
{  
    int mid;  
    if(low<high)  
    {  
        mid = (low+high)/2;  
        mergeSort(a,low,mid);  
        mergeSort(a,mid+1,high);  
        merge(a,low,mid,high);  
    }  
}  
void merge(int a[], int low, int mid, int high)  
{  
    int i=low,j=mid+1,k,index = low;  
    int temp[30];  
    while(i<=mid && j<=high)  
    {  
        if(a[i]<a[j])  
        {  
            temp[index] = a[i];  
            i = i+1;  
        }  
        else   
        {  
            temp[index] = a[j];  
            j = j+1;   
        }  
        index++;  
    }  
    if(i>mid)  
    {  
        while(j<=high)  
        {  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else   
    {  
        while(i<=mid)  
        {  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    for(k=low;k<=high;k++)
    {
    	a[k]=temp[k];
	}
}  
