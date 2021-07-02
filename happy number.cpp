#include<iostream>
using namespace std;

int happynumber(int n)
{
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem);
		n=n/10;	 	
	}
	return sum;
}
int main()
{
	int n,res;
	cout<<"Enter a number:";
	cin>>n;
	res=n;
	while(res!=1 && res!=4)
	{
		res=happynumber(res);
	}
	if(res==1)
	{
		cout<<n <<" is a happy number";
	}
	else if(res==4)
	{
		cout<<n <<" is not a happy number";
	}
	else
	{
		cout<<"invalid number";
	}
}
