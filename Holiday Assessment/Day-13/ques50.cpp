#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n,sum=0,avg;
    cout<<"ENTER THE NUMBER OF ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENT";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        sum=sum+arr[j];
        avg=sum/i;
    }
    cout<<"THE SUM OF ELEMENTS IS "<<sum<<" AVERAGE IS "<<avg;
    return 0;
}