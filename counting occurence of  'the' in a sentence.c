#include<stdio.h>
void main()
{
	int i,a,count=0;
	char str[100];
	printf("enter the string:");
	gets(str);
	a=strlen(str);
	for(i=0;i<=a;i++){
		if((str[i]=='t' || str[i]=='T')&&(str[i+1]=='h' || str[i+1]=='H')&&(str[i+2]=='e' || str[i+2]=='E'))
		{
			count++;
		}
	}
	printf("%d",count);
	
}
