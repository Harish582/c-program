#include<stdio.h>
void main()
{
	int a[10],b[10],i,j,n,c,m,k,merge[100];
	printf("enter the number of elements to be stored in first array: ");
	scanf("%d",&n);
	printf("enter %d elements in array:",n);
	for(i=0;i<n;i++){
		printf("\nelement [%d]:",i);
		scanf("%d",&a[i]);
	}
		printf("enter the number of elements to be stored in second array: ");
	scanf("%d",&m);
	printf("enter %d elements in array:",m);
	for(j=0;j<n;j++){
		printf("\nelement [%d]:",j);
		scanf("%d",&b[j]);
    }
     c=n+m;
    for(i=0;i<n;i++){
    	merge[i]=a[i];	
		}
	for(j=0;j<m;j++){
		merge[i]=b[j];
		i++;
}
 
    for(i=0;i<c;i++){
    	for(k=0;k<c-1;k++){
    		if(merge[k]<=merge[k+1])
    		{
    		j=merge[k+1];
    		merge[k+1]=merge[k];
    		merge[k]=j;
			}
		}
	}
	 for(i=0;i<c;i++)
	 {
	 	printf(" %d",merge[i]);
	 }
	 printf("\n");
	
}


