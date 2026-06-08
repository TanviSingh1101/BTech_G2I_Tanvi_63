#include<iostream>
using namespace std;
int main()
{
int i,j,n,m;
cout<<"enter the number of rows";
cin>>n;
cout<<"enter the column";
cin>>m;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        cout<<" * ";
    }
    cout<<"\n";
}
return 0;
}