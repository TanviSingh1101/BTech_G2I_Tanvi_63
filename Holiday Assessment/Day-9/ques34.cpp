#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,k;
    cout<<"ENTER THE ROWS:";
    cin>>m;
    cout<<"ENTER THE COLUMN:";
    cin>>n;
    for(i=m;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
           cout<<j;
        }
        cout<<endl;
    }
    return 0;
}