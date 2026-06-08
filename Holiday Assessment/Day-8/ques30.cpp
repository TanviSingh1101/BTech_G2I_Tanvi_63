#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"enter the no of rows";
    cin>>n;
    cout<<"enter the no of column";
    cin>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
