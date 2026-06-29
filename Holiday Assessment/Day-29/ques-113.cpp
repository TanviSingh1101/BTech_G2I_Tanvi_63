#include<iostream>
using namespace std;
int main()
{
    int choice,a,b,result;
    cout<<"======MENU DRIVEN CALCULATOR======\n";
    cout<<"(1)Sum  \t(2)subtract\n(3)Product\t(4)Division\n";
    cout<<"choice";
    cin>>choice;
    cout<<"Enter the values for calculation ";
    cin>>a>>b;
    if(choice==1)
{
    result=a+b;
    cout<<"The sum of the values is "<<result;
    return 0;
}
else if (choice==2)
{
    result=a-b;
    cout<<"The subtract of hte values is "<<result;
    return 0;
}
else if (choice==3)
{
    result=a*b;
    cout<<"The product of these values is "<<result;
    return 0;
}
else if(choice==4)
{
    result=a/b;
    cout<<"The quotient on divison is "<<result;
    return 0;
}
else
cout<<"OOPS! wrong choice";
return 0;
}