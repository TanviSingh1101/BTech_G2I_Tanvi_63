#include<iostream>
using namespace std;
int main()
{
    int sum=0,arr[100],i,j,n,m;
    cout<<"ENTER THE NO OF ELEMENT ";
    cin>>n;
    cout<<"ENTER THE ELEMENT ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER THE REQUIRED SUM ";
    cin>>m;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==m)
            cout<<arr[i]<<"and"<<arr[j]<<"\n";
        }
    }
    return 0;
}
