#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,m,j;
    char str[100],rst[100],merge[200];
    cout<<"Enter the first array : ";
    cin.getline(str,100);
    n=strlen(str);
    cout<<"Enter the second string : ";
    cin.getline(rst,100);
    m=strlen(rst);
    cout<<"The merged string is :";
    j=0;
    for(i=0;i<n;i++)
    {
        merge[j]=str[i];
        j++;
    }
    for(i=0;i<m;i++)
    {
        merge[j]=rst[i];
        j++;
    }
    merge[j]='\0';
    cout<<" "<<merge;
    return 0;
}