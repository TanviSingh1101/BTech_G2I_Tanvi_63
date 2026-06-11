#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    int x,y,m;
    cout<<"ENTER THE NUMBER TO COMPARE";
    cin>>x>>y;
    m=max(x,y);
    cout<<"THE MAX BETWEEN THESE NUMBER IS:"<<m;
    return 0;
}