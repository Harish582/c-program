#include<iostream>
using namespace std;
 
bool consecutivearray(int a[],int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]-a[i-1]==1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}



int main()
{
	int a[20],n,i,j,temp;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"after sorting array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	if(consecutivearray(a,n)==true)
	{
		cout<<"array is consecutive";
	}
	else
	{
		cout<<"array is not consecutive";
	}
	
}
