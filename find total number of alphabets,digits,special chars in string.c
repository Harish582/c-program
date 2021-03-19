#include<stdio.h>
void main()
{
	int i,alphabets=0,digits=0,special_char=0;
	char str[100];
	printf("enter the string:");
	gets(str);
	i=0;
	while(str[i]!='\0'){
		if(str[i]>='0' && str[i]<='9'){
			digits++;
		}
		else if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
			alphabets++;
		}
		else{
			special_char++;
		}
		i++;	
	}
		printf("alphabets=%d\ndigits=%d\nspecial_characters=%d",alphabets,digits,special_char);
}
