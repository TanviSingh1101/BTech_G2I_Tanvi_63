#include<iostream>
using namespace std;
int main()
{
    int i,j=0,num,pow,result=1;
    cout<<"ENTER THE NUMBER WHOSE POWER IS TO FIND:";
    cin>>num;
    cout<<"ENTER THE POWER:";
    cin>>pow;
    for(i=0;i<=pow;i++)
    {
        result=result*num;
        i++;
    }
    cout<<result;
    return 0;
}