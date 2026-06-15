#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n;
    cout<<"ENTER THE NUMBER OF THE ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENTS";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE REVERSE AARRAY IS\n";
    for(j=n-1;j>=0;j--)
    {
        cout<<" "<<arr[j]<<" ";
    }
    return 0;
}