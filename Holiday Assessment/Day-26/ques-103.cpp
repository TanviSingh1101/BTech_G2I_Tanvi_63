#include<iostream>
using namespace std;
int main()
{
    int a,b=10000,c,d;
    cout<<"Select the option below :\n";
    cout<<"(1) Balance \n";
    cout<<"(2) Deposite \n";
    cout<<"(3) Withdrawal \n";
    cout<<"Option";
    cin>>c;
    switch(c)
    {
    case 1:cout<<b;
    break;
    case 2:cout<<"Amount to deposit is : ";
    cin>>d;
    cout<<"Amount is "<<d+b;
    break;
    case 3:cout<<"Amount you want to withdraw : ";
    cin>>a;
    if(a>b)
    cout<<"Insufficient balance ";
    else{
    cout<<"Transaction in pocessing \n";
    cout<<"Amount : "<<b-a;
    }
    break;
    }
    return 0;
}