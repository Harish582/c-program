#include<stdio.h>
void main()
{
	char str[100];
	int i,n;
	printf("enter the string:");
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
	
		if(str[i]==' ')
		{
		 printf("\n");
		}
		else{
		  printf("%c",str[i]);
		  
    	}

	}
	
}
