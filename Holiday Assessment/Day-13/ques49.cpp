#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n;
    cout<<"ENTER THE NUMBER OF ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENT:";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"THE ELEMENTS ARE:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}