#include<iostream>
using namespace std;
int main()
{
	int a[20],b[20],n1,n2,i,j,k=1;
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
	for(i=0;i<n2;i++);
	{
		for(j=n1;j>=k;j++)
		{
			a[j+1]=a[j];
		}
		a[k]=b[i];
		k=k+2;
		n1++;
	}
    cout<<"after sorting array is:";
    for(i=0;i<n1;i++)
    {
    	cout<<a[i];
	}
	
}
