#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,max,n,swap;
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
    max=i;
    for(j=i+1;j<n;j++)
    {
    if(arr[j]>arr[max])
    {
        max=j;
    }}
    if(arr[max]!=arr[i])
    {
    swap=arr[max];
    arr[max]=arr[i];
    arr[i]=swap;
    }
}
for(i=0;i<n;i++)
cout<<" "<<arr[i];
return 0;
}