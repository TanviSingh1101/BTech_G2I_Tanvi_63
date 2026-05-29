#include<stdio.h>
int main()
{
    int sum,n,num;
    printf("enter the number whose digits sum you want:");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        num=n%10;
        sum=sum+num;
        n=n/10;
    }
    printf("the sum of digits is %d",sum);
    return 0;
}