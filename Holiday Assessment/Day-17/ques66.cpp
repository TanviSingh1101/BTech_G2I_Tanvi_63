#include<iostream>
using namespace std;

int main()
{
  int n1,n2,i,j,flag,arr1[100],arr2[100];
  cout<<"Enter the no. of elements of the 1st array: ";
  cin>>n1;
  cout<<"Enter the elements of the 1st array: ";
  for(i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  cout<<"Enter the no. of elements of the 2nd array: ";
  cin>>n2;
  cout<<"Enter the elements of the 2nd array: ";
  for(i=0;i<n2;i++)
  {
    cin>>arr2[i];
  }
  cout<<"Union of the two arrays: ";
  for(i=0;i<n1;i++)
  {
    cout<<arr1[i]<<" ";
  }
  for(j=0;j<n2;j++)
  {
    flag=0;
    for(i=0;i<n1;i++)
    {
      if(arr1[i]==arr2[j])
      {
        flag=1;
        break;
      }
    }
    if(flag!=1)
    {
      cout<<arr2[j]<<" ";
    }
    
  }
  
  return 0;
}