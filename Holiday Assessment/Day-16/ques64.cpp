#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[100],n,i;
    cout<<"ENTER THE RANGE OF ARRAY ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+n);
    cout<<"ARRAY WITH NO DUPLICATES IS";
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<" "<<arr[i]<<" ";
        }
    }
    return 0;
}