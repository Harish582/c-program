#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter n value:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%15==0)
		{
			cout<<"Fizzbuzz"<<" ";
		}
		else if(i%3==0)
		{
			cout<<"Fizz"<<" ";
		}
		else if(i%5==0)
		{
			cout<<"buzz"<<" ";
		}
		else
		{
			cout<<i<<" ";
		}
	}
}
