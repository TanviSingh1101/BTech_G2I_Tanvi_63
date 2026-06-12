#include<iostream>
#include<math.h>
using namespace std;
int perfect(int x)
{
    int n,i,remain,sum=0,fact=1;
    n=x;
    while(n!=0)
    {
        remain=n%10;
        for(i=remain;i>=1;i--)
        {
            fact=fact*i;
        }
       sum=sum+fact;
       n=n/10;
       fact=1;
    }
    if(sum==x)
    cout<<"PERFECT NUMBER";
    else
    cout<<"NOT PREFECT NUMBER";
    return 0;
}
int main()
{
    int x;
    cout<<"ENTER THE NUMBER TO CHECK THE PERFECT";
    cin>>x;
   perfect(x);
    return 0;
}