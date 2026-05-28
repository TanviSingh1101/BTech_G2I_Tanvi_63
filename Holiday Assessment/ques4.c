#include<stdio.h>
int main()
{
    int n,num,count=0;
    printf("enter the number whose digits to count:");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits in %d is %d",num,count);
    return 0;
}


