#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[100],i,j,max=INT8_MIN,n,a;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENTS :";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]>max)
       { a=max;
        max=arr[j];
       }
    }
    cout<<"THE SECOND LARGEST VALUE IN THE ARRAY IS "<<a;
    return 0;
}