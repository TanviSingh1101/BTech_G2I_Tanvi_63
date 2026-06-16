#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i,d,next_term,a,b;
    cout<<"ENTER THE RANGE OF ARRAY ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE MISSING ELEMENT IS ";
    a=arr[0];
    d=(arr[n-1]-a)/(n-1);
    for(i=0;i<n-1;i++)
    {
        a=arr[i];
        next_term=a+d;
        if(arr[i+1]!=next_term)
        {
            cout<<" "<<next_term;
        }
    }
    return 0;
}