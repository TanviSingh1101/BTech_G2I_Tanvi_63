#include<iostream>
#include<string>
using namespace std;
struct student
{
    int roll_no;
    string name;
    int year;
}S[100];
int main()
{
    int i,choice,n,search,count=0;
    do
    {
    cout<<"\n====WELCOME TO STUDENT RECORD SYSTEM====\n";
    cout<<"(1)Add student\t(2)Display the record\n(3)Search\t(4)Exit\nchoice";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the number of the students to add : ";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"Enter the roll number ";
            cin>>S[i].roll_no;
            cout<<"Enter the name ";
            cin>>S[i].name;
            cout<<"Enter the year ";
            cin>>S[i].year;
        }
    }
    else if(choice==2)
    {
        cout<<"The record is as follows\n";
         for(i=0;i<n;i++)
         {
            cout<<S[i].roll_no<<"\t"<<S[i].name<<"\t"<<S[i].year<<"\n";
         }
    }
    else if (choice==3)
    {
        cout<<"Enter the roll number ";
        cin>>search;
        for(i=0;i<n;i++)
        {
            if(S[i].roll_no==search)
            {
                cout<<"The stuent is "<<S[i].name<<" studies in year "<<S[i].year;
                count++;
            }
        }
    }
    else if(choice==4)
    {
        cout<<"Exiting.....Thanks for visiting ";
    }
    else
    cout<<"Its an invalid choice";
    }while(choice!=5);
    return 0;
}