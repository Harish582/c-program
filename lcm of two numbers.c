#include<stdio.h>
void main()
{
	int n1,n2,gcd,i,max,lcm;
	printf("enter n1 and n2:");
	scanf("%d%d",&n1,&n2);
	max=(n1>n2) ? n1:n2;
	for(i=1;i<=max;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
			lcm=(n1*n2)/gcd;	
		}
	}
	printf("lcm of given numbers is %d",lcm);
}
