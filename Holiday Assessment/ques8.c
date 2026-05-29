#include<stdio.h>
int main()
{
    int original,reverse,n,m;
    printf("enter the number to check palindrome");
    scanf("%d",&original);
    reverse=0;
    if(original==0)
    printf("it is an invalid input");
    else
    {
        n=original;
    while(n!=0)
    {
        m=n%10;
        reverse=reverse*10+m;
        n=n/10;
    }
    printf("its reverse is %d",reverse);
}
    if(original!=reverse)
    printf("its a not palindrome number");
    else
    printf("its a palindrome number");
    return 0;
}