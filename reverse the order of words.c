#include<stdio.h>
void main()
{
	char str[100];
	int i,n;
	printf("enter the string:");
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--){
		if(str[i]==' ')
		{
		    str[i]='\0';
			printf("%s ",(str[i])+1);
		}
	}
	printf("%s",str);
}
