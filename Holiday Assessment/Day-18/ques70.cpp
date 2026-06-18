#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,min,n,swap;
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
    min=i;
    for(j=i+1;j<n;j++)
    {
    if(arr[j]<arr[min])
    {
        min=j;
    }}
    if(arr[min]!=arr[i])
    {
    swap=arr[min];
    arr[min]=arr[i];
    arr[i]=swap;
    }
}
for(i=0;i<n;i++)
cout<<" "<<arr[i];
return 0;
}