#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j,count=0,m;
    char str[100],rst[100],flag;
    cout<<"Enter the first string ";
    cin.getline(str,100);
    n=strlen(str);
    cout<<"Enter the second string ";
    cin.getline(rst,100);
    m=strlen(rst);
    cout<<"Common characters in both the strings are\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[i]==rst[j])
            {
                flag=str[i];
                cout<<flag<<" ";
            }
        }
    }
    return 0;
}