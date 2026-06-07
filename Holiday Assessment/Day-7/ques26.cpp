#include<iostream>
using namespace std;
int fibonacci(int x)
{
    if(x==0)
    return 0;
    else if(x==1)
    return 1;
    else
    return fibonacci(x-1)+fibonacci(x-2);
}
int main()
{
    int i,n;
    cout<<"ENTER THE LAST LIMIT OF THE SERIES";
    cin>>n;
    for(i=0;i<=n-1;i++)
    cout<<" "<<fibonacci(i)<<" ";
    return 0;
}