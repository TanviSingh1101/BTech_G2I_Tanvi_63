#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n,result,flag;
    cout<<"ENTER THE NUMBER OF THE ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENTS";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE LEFT SHIFTED ARRRAY IS";
    flag=arr[0];
    for(j=1;j<n;j++)
    {
        arr[j-1]=arr[j];
        cout<<" "<<arr[j];
        if(j==n-1)
        {
            arr[j]=flag;
            cout<<" "<<flag;
        }
    }
    return 0;
}