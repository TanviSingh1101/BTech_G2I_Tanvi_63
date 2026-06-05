#include<stdio.h>
int main()
{
    int a=0,b=1,nextterm,n,count=0;
    printf("enter the term to be search:");
    scanf("%d",&n);
    while(count!=n-2)
    {
        nextterm=a+b;
        a=b;
        b=nextterm;
        count++;
    }
    printf("%d is the %d term",b,n);
    return 0;
}