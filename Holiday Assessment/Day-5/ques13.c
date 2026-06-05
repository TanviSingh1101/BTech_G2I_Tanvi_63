#include<stdio.h>
int main ()
{
    int a=0,b=1,nextterm,n,i,count=0;
    printf("enter the upper limit of the series");
    scanf("%d",&n);
    printf("the series is :");
    while(count!=n)
    {
        nextterm=a+b;
        printf(" %d ",nextterm);
        a=b;
        b=nextterm;
        count++;
    }
    return 0;
}