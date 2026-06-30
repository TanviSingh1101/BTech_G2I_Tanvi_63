#include<iostream>
#include<string>
#include<cstring>
using namespace std;
struct travelling_expense
{
   string from;
   float in;
   string to;
   float out;
   float distance;
   float amount;
}S[100];
int main()
{
    int i,n,id;
    string name[100],pos[100];
    cout<<"\n======WELCOME TO TRAVELLING EXPENCE SYSTEM OF XYZ SALES COMPANY======\n";
    cout<<"Enter the position in the company";
    getline(cin,pos[100]);
    cout<<"Enter your id ";
    cin>>id;
    cout<<"Enter the information\n";
    cout<<"Enter the number of days you work";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Day-"<<i+1<<"\n";
        cout<<"starting point";
        cin>>S[i].from;
        cout<<"starting time";
        cin>>S[i].in;
        cout<<"reach desination";
        cin>>S[i].to;
        cout<<"reach time";
        cin>>S[i].out;
        cout<<"distance travelled";
        cin>>S[i].distance;
        cout<<"toatal fare";
        cin>>S[i].amount;
    }
     cout<<"==The employee details and fare is\n";
     cout<<"Employee id-"<<id<<"\nPosition-"<<"\n";
     cout<<"From  \t   In time  \t  Destiny     \t  Reach time\tDistance travelled\tFare or amount\n";
    for(i=0;i<n;i++)
    {
        cout<<S[i].from<<"\t"<<S[i].in<<"\t"<<S[i].to<<"\t"<<S[i].out<<"\t"<<S[i].distance<<"\t"<<S[i].amount<<"\n";
    }
    return 0;
}