#include<stdio.h>
#include<math.h>
int main()
{
    int i,m,n,num,count,sum,remain;
    printf("enter the lower and upper limit:");
    scanf("%d%d",&m,&n);
    printf("the armstrong number in the range:");
    for(i=m;i<=n;i++)
    {
        count=0;
        sum=0;
        num=i;
        while(num!=0)
        {
            num=num/10;
            count++;
        }
        num=i;
        while(num!=0)
        {
          remain=num%10;
          sum=sum+round(pow(remain,count));
          num=num/10;
        }
        if((int)sum==i)
        printf(" %d ",i);
    }
    return 0;
}