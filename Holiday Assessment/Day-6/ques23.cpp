#include<iostream>
using namespace std;
int main()
{
    int remain,n,num,count=0;
    cout<<"ENTER THE NUMBER :";
    cin>>num;
    cout<<"THE SET OF BITS ARE:";
    n=num;
    while(n!=0)
    {
      remain=n%10;
      if(remain==1)
      count++;
      n=n/10;
    }
    cout<<count;
    return 0;
}