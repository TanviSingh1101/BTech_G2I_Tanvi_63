#include<iostream>
#include<math.h>
using namespace std;
int armstrong(int x)
{
    int n,count=0,remain,sum=0;
    n=x;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=x;
    while(n!=0)
    {
        remain=n%10;
        sum=sum+round(pow(remain,count));
        n=n/10;
    }
    if(sum==x)
    cout<<"ARMSTRONG";
    else
    cout<<"NOT ARMSTRONG";
    return 0;
}
int main()
{
    int x;
    cout<<"ENTER THE NUMBER TO CHECK THE ARMSTRONG";
    cin>>x;
    armstrong(x);
    return 0;
}