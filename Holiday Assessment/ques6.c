#include<stdio.h>
int main()
{ 
    int reverse=0,num,n;
    printf("enter the number whose reverse is to find out:");
    scanf("%d",&num);
    while(num!=0)
    {
        n=num%10;
        reverse=reverse*10+n;
        num=num/10;
    }
    printf("the reverse of the number is %d",reverse);
    return 0;
}