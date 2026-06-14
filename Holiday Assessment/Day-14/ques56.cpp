#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,k,n,count=0,flag;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENTS :";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"THE REPEATED ELEMEMTS ARE:\n";
    for(j=0;j<n;j++)
    {
        for(k=n;k>j;k--)
        {
            if(arr[j]==arr[k])
            count++;
        }
         if(count>0)
        {
            cout<<"THE "<<arr[j]<<" HAS "<<count<<" DUPLICATE IN THE ARRRAY\n";
        }
        count=0;
    }
    return 0;
}