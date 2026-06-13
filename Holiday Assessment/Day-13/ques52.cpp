#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n,count=0,flag=0;
    cout<<"ENTER THE NUMBER OF ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENT";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]%2==0)
        count++;
        else 
        flag++;
    }
    cout<<"THE ODD ELEMENTS ARE "<<flag<<" AND EVEN ARE "<<count;
    return 0;
}