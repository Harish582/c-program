#include<stdio.h>
void main()
{
	char str[50];
	int i,len;
	printf("enter the string:");
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
