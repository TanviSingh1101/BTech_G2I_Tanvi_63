#include<iostream>
using namespace std;
int main()
{
    int arr[100],i,j,n,l,flag;
    cout<<"ENTER THE NUMBER OF THE ELEMENT";
    cin>>n;
    cout<<"ENTER THE ELEMENTS";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"THE RIGHT SHIFTED ARRRAY IS";
    flag=arr[n-1];
    for(j=n-1;j>0;j--)
    {
      arr[j]=arr[j-1];
      } 
      arr[0]=flag;
      for(l=0;l<n;l++)
      {
        cout<<" "<<arr[l]<<" ";
      }
        
    return 0;
}