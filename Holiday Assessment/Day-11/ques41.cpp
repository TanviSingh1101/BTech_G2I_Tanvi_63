#include<iostream>
using namespace std;
int sum(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b;
    cout<<"ENTER THE TWO NUMBER:";
    cin>>a>>b;
    cout<<"THE SUM IS :"<<sum(a,b);
    return 0;
}