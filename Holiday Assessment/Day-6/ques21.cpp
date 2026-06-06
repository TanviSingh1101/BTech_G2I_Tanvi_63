#include<iostream>
using namespace std;
int main()
{
    int i=0,num,n,remain,arr[20],j;
    cout<<"ENTER THE NUMBER TO CONVERT INTO BINARY";
    cin>>num;
    cout<<"ITS BINARY FORM:";
    n=num;
    while(n!=0)
    {
      remain=n%2;
      i++;
      arr[i]=remain;
      n=n/2;
    }
    for(j=i;j>=1;j--)
    {
      cout<<arr[j];
    }
    return 0;
  }