#include<stdio.h>
void main()
{
	int i,j,m,n,a[10][10],tran[10][10];
	printf("enter the row and column:");
	scanf("%d%d",&m,&n);
	printf("enter the elements:");
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 	 // printf("\n the elements [%d] [%d]:",i,j);
	 	  scanf("%d",&a[i][j]);
	 }
    }
    printf("the matrix is ");
    for(i=0;i<m;i++){
    	printf("\n");
	 	for(j=0;j<n;j++){
	 	  printf("%d\t",a[i][j]);
	 	  
	 }
    }
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		tran[i][j]=a[j][i];
		 }
	}
	printf("\ntranspose of a matrix");
	for(i=0;i<m;i++){
			printf("\n");
	 	for(j=0;j<n;j++){
	 	
	 		printf("%d\t",tran[i][j]);
	 		
		 }

}
}

