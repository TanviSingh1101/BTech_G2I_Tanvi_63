#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,i,j,arr[100],count=0;
  cout<<"Enter the no. of elements of the array: ";
  cin>>n;
  cout<<"Enter the elements of the array: ";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Common elements are :";
  std::sort(arr,arr+n);
 for(i=0;i<n;i++)
 {
    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        count++;
        else
        count=0;
        if(count>0)
        cout<<" "<<arr[i];
    }
 }
 return 0;
}
  