#include<stdio.h>
void main()
{
	int i;
	char str[100];
	printf("enter the string:");
	gets(str);
	for(i=0;i<=strlen(str);i++){
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		
		}
		
	}
	printf("converted string: %s",str);
}
