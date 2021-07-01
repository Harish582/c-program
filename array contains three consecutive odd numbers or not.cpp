#include<iostream>
using namespace std;
int main()
{
	int a[30],n,i,j;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]%2!=0)&&(a[j]%2!=0)&&(a[j+1]%2!=0))
			{
				cout<<"This array contains three consecutive odd numbers";
			}
			else
			{
				break;
			}
		}
	}
}
