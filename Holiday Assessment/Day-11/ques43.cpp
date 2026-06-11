#include<iostream>
using namespace std;
int prime(int n)
{
    int remain,i,count=0;
     if(n==0)
    cout<<"invalid input";
    else if(n==1)
    cout<<"not a prime";
    else{
    for(i=2;i<=n;i++)
     {
        remain=n%i;
        if(remain==0)
        count++;
     }
        if(count==1)
         cout<<"its a prime number";
        else 
        cout<<"not prime";
    }
}
int main()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    prime(x);
    return 0;
}