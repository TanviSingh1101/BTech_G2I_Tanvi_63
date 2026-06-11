#include<iostream>
using namespace std;
int factorial(int x)
{
    int i,fact=1;
    for(i=x;i>=1;i--)
    fact=fact*i;
    return fact;
}
int main()
{
    int x;
    cout<<"ENTER THE NUMBER:";
    cin>>x;
    cout<<"THE FACTORIAL IS :"<<factorial(x);
    return 0;
}