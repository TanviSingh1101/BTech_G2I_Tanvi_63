#include<stdio.h>
int main()
{
    int digit,n,num;
    float product=1;
    printf("enter the number whose digits product is wanted:");
    scanf("%d",&num);
    if(num==0)
    printf("product is zero itself");
    else if(num==1)
    printf("invalid input");
    else
    {
        n=num;
        while(n!=0)
        {
            digit=n%10;
            product=product*digit;
            n=n/10;
        }
        printf("the product of digits is %.2f",product);
    }
    return 0;
}