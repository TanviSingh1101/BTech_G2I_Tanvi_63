#include<iostream>
#include<string>
using namespace std;
struct employee
{
    int id;
    string name;
    float salary;
}S[100];
int main()
{
    int i,choice,n,search;
    do
    {
    cout<<"\n====WELCOME TO MINI EMPLOYEE RECORD SYSTEM====\n";
    cout<<"(1)Add employee\t(2)Display the record\n(3)Search\t(4)Exit\nchoice";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the number of the employees to add : ";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"Enter the employee id ";
            cin>>S[i].id;
            cout<<"Enter the name ";
            cin>>S[i].name;
            cout<<"Enter the salary ";
            cin>>S[i].salary;
        }
    }
    else if(choice==2)
    {
        cout<<"The record is as follows\n";
         for(i=0;i<n;i++)
         {
            cout<<S[i].id<<"\t"<<S[i].name<<"\t"<<S[i].salary<<"\n";
         }
    }
    else if (choice==3)
    {
        cout<<"Enter the employee id ";
        cin>>search;
        for(i=0;i<n;i++)
        {
            if(S[i].id==search)
            {
                cout<<"The employee is "<<S[i].name<<" earning salary "<<S[i].salary;
            }
        }
    }
    else if(choice==4)
    {
        cout<<"Exiting.....Thanks for visiting ";
    }
    else
    cout<<"Its an invalid choice";
    }while(choice!=4);
    return 0;
}