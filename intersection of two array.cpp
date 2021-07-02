#include<iostream>
using namespace std;
int main()
{
	int a[20],b[20],n1,n2,i,p=0,q=0;
	cout<<"enter array1 size:";
	cin>>n1;
	cout<<"enter array1 elements:";
	for(i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"enter array2 size:";
	cin>>n2;
	cout<<"enter array2 elements:";
	for(i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	 
	while(p<=n1 && q<=n2)
	{
		if(a[p]<b[q])
		{
			p++;
		}
		else if(b[q]<a[p])
		{
			q++;
		}
		else if(a[p]==b[q])
		{
			cout<<a[p]<<" ";
			p++;
			q++;
		}
	}
	
}
