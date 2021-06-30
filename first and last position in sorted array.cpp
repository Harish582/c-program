#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,key,first_index=-1,last_index=-1;
	cout<<"Enter array size:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
    {
      cin>>a[i];	
	}	
	cout<<"enter key value:";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			if(first_index==-1)
			{
				first_index=i;
				last_index=i;
			}
			else
			{
				last_index=i;
			}
		}
		
	}
	if(first_index!=-1)
	{
		cout<<"first index is:"<<first_index<<endl;
		cout<<"last index is:"<<last_index<<endl;
	}
	else
	{
		cout<<"element not found";
	}
}
