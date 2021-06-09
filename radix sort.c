#include<stdio.h>
 
int getMax(int arr[], int n) {
    int mx = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
 
void countSort(int arr[], int n, int m , int pos) {
    int output[n]; 
    int i, count[10] = { 0 };
 

    for (i = 0; i < n; i++)
    {
        count[(arr[i] / pos) % 10]++;
    }
    for (i = 1; i <= m; i++)
    {
        count[i] =count[i]+count[i - 1];
    }
    
    for (i = n - 1; i >= 0; i--)
	 {
        output[--count[(arr[i] / pos) % 10]] = arr[i];
        
    }
 
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


void radixsort(int arr[], int n) {
    int m = getMax(arr, n);
 
    int pos;
    for (pos = 1; m / pos > 0; pos*= 10)
        countSort(arr, n, m , pos);
}
 


 
int main() {
    int arr[50],n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    radixsort(arr, n);
    printf("After sorting the arrray is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
