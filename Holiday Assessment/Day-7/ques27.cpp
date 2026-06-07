#include<iostream>
using namespace std;
int digit_sum(int num)
{  int sum=0,m,n;
    if(num==0)
     return sum;
    else
    {   
        m=num;
        n=m%10;
        sum=sum+n;
        m=m/10;
        return sum+digit_sum(m);
    }
}
int main()
{
    int num;
    cout<<"ENTER THE NUMBER";
    cin>>num;
    cout<<digit_sum(num);
    return 0;
}