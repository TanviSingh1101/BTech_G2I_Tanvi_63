#include<iostream>
using namespace std;
int main()
{
    int arr1[50],arr2[50],i,j,n_arr[100],n,m,k;
    cout<<"ENTER THE SIZE OF BOTH THE ARRAY";
    cin>>n>>m;
    cout<<"ENTER TH EELEMENTS OF THE 1 ARRAY";
    for(i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"ENTER THE ELEMNTS OF 2 ARRAY";
    for(j=0;j<m;j++)
    cin>>arr2[j];
    cout<<"THE MERGED ARRAY IS :";
    for(i=0;i<n;i++)
    {
       for(k=0;k<n;k++);
        {
         n_arr[k]=arr1[i];
         cout<<" "<<n_arr[k];
        }
    }
    for(j=0;j<m;j++)
    {
        for(k=n;k<m;k++);
        {
        n_arr[k]=arr2[j];
        cout<<" "<<n_arr[k];
        }
    }
    return 0;
}