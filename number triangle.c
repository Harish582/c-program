#include<stdio.h>
void main()
{
	int i,j,n,m,k,count=1;
	scanf("%d",&n);
	m=k=n-1;

	for(i=0;i<n;i++){
	    
		count=0;
		for(j=0;j<2*n-1;j++){
			if(j>=m && j<=k)
			{
				if(j<=n-1)
				{
				count++;
				printf("%d",count);
				
		    	}
		    	else
		    	  {
		    	  count--;	
				  printf("%d",count);
		    	  
		          }
			}
			else{
			   printf(" ");
			   
		    }
		}
			m--;
			k++;
			printf("\n");
	}
	

}
