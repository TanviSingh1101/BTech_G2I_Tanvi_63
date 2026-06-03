#include<stdio.h>
int main()
{
    int i,count=0,n;
    printf("enter the number to be checked as a prime number:");
    scanf("%d",&n);
    if(n==0)
    printf("invalid input");
    else if(n==1)
    printf("not a prime number");
    else
    {
        for(i=2;i<=n;i++)
        {
          count=n%i;
          count++;
        }
        if(count==1)
        printf("its a prime number");
        else
        printf("its not a prime number");
    }
    return 0;
}