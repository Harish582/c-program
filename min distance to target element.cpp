#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,target,start,res;
	cout<<"enter array size";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter target value:";
	cin>>target;
	cout<<"enter start value:";
	cin>>start;
	for(i=0;i<n;i++)
	{
		if(a[i]==target)
		{
		break;
	    }
		
	}
	res=i-start;
	cout<<res;
	
}
