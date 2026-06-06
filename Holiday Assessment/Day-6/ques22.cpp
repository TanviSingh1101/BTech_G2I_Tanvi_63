#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,n,i,remain,sum=0,j=0;
    cout<<"ENTER THE NUMBER TO CONVERT INTO THE DECIMAL";
    cin>>num;
    cout<<"ITS DECIMAL FORM IS :";
    n=num;
    while(n!=0)
     {
        remain=n%10;
        j++;
        n=n/10;
   }
   n=num;
   for(i=0;i<=j;i++)
   {
    remain=n%10;
    sum=sum+remain*pow(2,i);
    n=n/10;
   }
   cout<<sum;
   return 0;
}