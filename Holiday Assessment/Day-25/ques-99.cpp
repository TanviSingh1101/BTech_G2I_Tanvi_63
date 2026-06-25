#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,m;
    string str[100];
    cout<<"Enter the number of names ";
    cin>>n;
    cout<<"Enter the "<<n<<" names ";
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    sort(str,str+n);
    cout<<"\n Names in alphabetically order is ";
    for(i=0;i<n;i++)
    {
        cout<<str[i];
    }
    return 0;
}