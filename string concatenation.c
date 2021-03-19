#include<stdio.h>
void main()
{
	int n1,n2,n,i;
	char str1[100],str2[100];
	printf("enter the first string:");
	gets(str1);
	printf("enter the second string:");
	gets(str2);
	n1=strlen(str1);
	n2=strlen(str2);
	str1[n1]=' ';
	n=n1+1;
	for(i=0;i<n;n++,i++){
		
		str1[n]=str2[i];
	}
	str1[n]='\0';
	printf("%s",str1);
}
