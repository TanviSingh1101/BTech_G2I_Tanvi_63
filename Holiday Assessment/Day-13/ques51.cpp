#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,max=INT8_MIN,min=INT8_MAX,j,n;
    cout<<"ENTER THE NUMBER OF ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENT";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]>max)
        max=arr[j];
        else if(arr[j]<min)
        min=arr[j];
    }
    cout<<"THE MAX ELEMENT IS "<<max<<" THE MIN IS "<<min;
    return 0;
}