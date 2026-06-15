#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n,l=0,flag;
    cout<<"ENTER THE NUMBER OF THE ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENTS";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ARRAY WITH ZEROS AT THE END";
    for(j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            flag=arr[j];
            arr[j]=arr[l];
            arr[l]=flag;
            l++;
        }
    }
    for(i=0;i<n;i++)
        {cout<<" "<<arr[i];
    }
    return 0;
}