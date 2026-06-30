#include<iostream>
#include<string>
using namespace std;
struct books
{
    int id;
    string name;
    int no;
}S[100];
int main()
{
    int i,choice,n,search;
    do
    {
    cout<<"\n====WELCOME TO MINI LIBRARY RECORD SYSTEM====\n";
    cout<<"(1)Add book\t(2)Display the record\n(3)Search\t(4)Exit\nchoice";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the number of the books to add : ";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"Enter the book id ";
            cin>>S[i].id;
            cout<<"Enter the name ";
            cin>>S[i].name;
            cout<<"Enter the number of book available ";
            cin>>S[i].no;
        }
    }
    else if(choice==2)
    {
        cout<<"The record is as follows\n";
         for(i=0;i<n;i++)
         {
            cout<<S[i].id<<"\t"<<S[i].name<<"\t"<<S[i].no<<"\n";
         }
    }
    else if (choice==3)
    {
        cout<<"Enter the book id number ";
        cin>>search;
        for(i=0;i<n;i++)
        {
            if(S[i].id==search)
            {
                cout<<"The book is "<<S[i].name<<" currently no of books present is "<<S[i].no;
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