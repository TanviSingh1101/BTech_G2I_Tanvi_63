#include<iostream>
using namespace std;
int fibonacci(int x)
{
    int i=0,a=0,b=1,next;
    for(i=0;i<=x;i++)
    {
        next=a+b;
        cout<<" "<<next;
        a=b;
        b=next;
        i++;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER";
    cin>>n;
    cout<<"THE FIBONACCI SERIES UPTO"<<n<<"TREM IS:";
    fibonacci(n);
    return 0;
}