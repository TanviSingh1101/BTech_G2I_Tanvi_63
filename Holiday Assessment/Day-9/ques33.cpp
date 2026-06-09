#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"ENTER THE ROW:";
    cin>>m;
    cout<<"ENTER THE COLUMN:";
    cin>>n;
    for(i=1;i<=m;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}