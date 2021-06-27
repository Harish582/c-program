#include<iostream>

using namespace std;
 
int main()
    {
        int arr[20],n,i,j;
        cout<<"Enter array size:";
        cin>>n;
        cout<<"enter array elements:";
        for(i=0;i<n;i++)
        {
        	cin>>arr[i];
		}
		cout<<"Res is:";
		 for (i = 0; i < n; i++) 
		 {
           int count = 0;
           for (j = 0; j < n; j++)
           {
             if (arr[i] == arr[j])
                count++;
           }
           if (count % 2 != 0)
            cout<< arr[i]<<" "  ;
        }
	
 
        return 0;
  }

