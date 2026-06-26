#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your age to know your voting eligibility : ";
    cin>>n;
    if(n<18)
    cout<<"You are not eligibile for voting ";
    else if(n>=18)
    cout<<"You are eligible for the voting ";
    return 0;
}
