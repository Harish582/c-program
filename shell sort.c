#include <stdio.h>
void shellsort(int arr[], int num)
{
    int i, j, gap, temp;
    for (gap = num / 2; gap > 0; gap = gap / 2)
    {
        for (j = gap; j < num; j++)
        {
            for(i = j - gap; i >= 0; i = i - gap)
            {
                if (arr[i+gap] >= arr[i])
                {
                    break;
                }
                else
                {
                    temp = arr[i];
                    arr[i] = arr[i+gap];
                    arr[i+gap] = temp;
                }
            }
        }
    }
}
int main()
{
    int arr[30],i,num;
    printf("Enter total no. of elements : ");
    scanf("%d", &num);
    printf("\nEnter %d numbers: ", num);
 
    for (i =  0 ; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    shellsort(arr, num);
    printf("\n Sorted array is: ");
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}
