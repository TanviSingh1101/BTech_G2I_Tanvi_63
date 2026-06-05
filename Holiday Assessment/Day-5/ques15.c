#include<stdio.h>
#include<math.h>
int main()
{
    int originalnum,num,n,sum=0,count=0;
    printf("enter the number to check the armstrong number");
    scanf("%d",&originalnum);
    num=originalnum;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    num=originalnum;
    while(num!=0)
    {
        n=num%10;
        sum=sum+(int)round(pow(n,count));
        num=num/10;
    }
    if(originalnum==sum)
    printf("%d is an armstrong number",originalnum);
    else
    printf("%d is not an armstrong number",originalnum);
    return 0;
}