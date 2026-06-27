#include<iostream>
#include<string>
using namespace std;
struct student
{
    int s_no;
    string name;
    int year;
    string course;
} S[100];
int main()
{
    int n,i;
    cout<<"Enter the number of the employee ";
    cin>>n;
    cout<<"------Enter the details-------";
    for(i=0;i<n;i++)
    {
        cout<<"S.no ";
        cin>>S[i].s_no;
        cout<<"Name ";
        cin>>S[i].name;
        cout<<"Year ";
        cin>>S[i].year;
        cout<<"Course ";
        cin>>S[i].course;
    }
    for(i=0;i<n;i++)
    {
        cout<<S[i].s_no<<" "<<S[i].name<<" "<<S[i].year<<" "<<S[i].course<<endl;
        
    }
    return 0;
}
