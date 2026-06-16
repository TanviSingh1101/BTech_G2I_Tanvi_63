#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[100],n,i,frequency=0,count=1,flag=0;
    cout<<"ENTER THE RANGE OF ARRAY ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+n);
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
        count++;
        }
        else
        {
            count=0;
        }
        if(frequency<count)
       {
        frequency=count;
        flag=arr[i];
       }
     }
     cout<<"THE HIGHEST FREQUENCY IS "<<frequency<<" OF"<<flag;
     return 0;
    }
