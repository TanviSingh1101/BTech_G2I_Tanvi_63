#include<iostream>
using namespace std;
int main()
{
    char i,j,k;
   for(i=65;i<=70;i++)
   {
    for(k=1;k<=70-i;k++)
   { cout<<" ";
   }
    for(j=65;j<=i;j++)
    { cout<<j;
    }
     for(j=i-1;j>=65;j--)
     {cout<<j;
     }
    cout<<endl;
}
   return 0;
}