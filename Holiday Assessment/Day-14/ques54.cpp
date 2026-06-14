#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,search,n,count=0;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    cout<<"ENTER THE ELEMENTS :";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    cout<<"ENTER THE VALUE WHOSE FREQUENCY TO COUNT:";
    cin>>search;
    for(j=0;j<n;j++)
    {
        if(arr[j]==search)
        count++;
    }
    if(count>0)
    cout<<"THE ELEMENT PRESENT IN ARRAY FOR "<<count<<" TIMES";
    else
    cout<<"THE ELEMENT DOESN'T EXIST FOR IN THE ARRAY";
    return 0;
}