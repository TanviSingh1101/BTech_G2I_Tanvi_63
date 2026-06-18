#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,n,beg,end,mid,target,found=0,pos=-1;
    cout<<"ENTER THE ARRAY SIZE ";
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF ARRAY ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER THE VALUE TO SEARCH ";
    cin>>target;
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(arr[mid]==target)
        {
        found++;
        pos=mid;
        cout<<"THE VALUE IS PRESENT IN ARRAY AT "<<pos+1<<" POSITION";
        break;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else
        {
        beg=beg+1;
        }
        mid=(beg+end)/2;
}
if(found==0&&pos==-1)
cout<<"THE VALUE IS NOT PRESENT IN THE ARRAY";
return 0;
}