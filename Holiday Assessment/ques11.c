#include<stdio.h>
int main()
{
    int a,b,temp,remain,max,min;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    while(remain!=0)
    {
        remain=max%min;
        max=min;
        min=remain;
    }
    printf("%d is the gcd of these two number",max);
    return 0;
}