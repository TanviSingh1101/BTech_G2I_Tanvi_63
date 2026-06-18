#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,swap,n;
    cout<<"ENTER THE ARRAY SIZE ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE SORTED ARRAY IS ";
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap=arr[i];
                arr[i]=arr[j];
                arr[j]=swap;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}