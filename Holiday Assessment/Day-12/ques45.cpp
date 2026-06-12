#include<iostream>
using namespace std;
int pallindrome(int x)
{
    int remain,reverse=0,n;
      n=x;
    while(n!=0)
    {
        remain=n%10;
        reverse=reverse*10+remain;
        n=n/10;
    }
    if(x==reverse)
    cout<<"PALLINDROME";
    else
    cout<<"NOT PALLINDROME";
    return 0;
}
int main()
{
    int a;
    cout<<"ENTER THE NUMBER TO CHECK THE PALLINDROME";
    cin>>a;
    pallindrome(a);
    return 0;
}