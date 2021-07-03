#include<iostream>
using namespace std;

bool power(int n)
{
   if(n<=0)
   {
     return false;
   }	
   return 1162261467%n==0;
}

int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	if(power(n))
	{
		cout<<"Given number is power of 3";
	}
	else
	{
		cout<<"It is not a power of 3";
	}
}
