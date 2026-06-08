#include<iostream>
using namespace std;
int main()
{
    int n,m;
    char i,j;
    cout<<"enter the no of rows";
    cin>>n;
    cout<<"enter the column";
    cin>>m;
    for(i=65;i<=n+65;i++)
    {
        for(j=65;j<=i;j++)
        {
            cout<<j;
        }
        cout<<" \n";
    }
    return 0;
}