#include<iostream>
using namespace std;
int main()
{
    char i,j;
    int m,n;
    cout<<"ENTER THE NO OF ROWS";
    cin>>m;
    cout<<"ENTER THE NO OF COLUMN";
    cin>>n;
    for(i=65;i<=m+65;i++)
    {
        for(j=65;j<=i;j++)
        {
            cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}