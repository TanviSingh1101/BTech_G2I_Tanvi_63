#include<stdio.h>
int main()
{
    int n,m,count,i,j;
    printf("enter the lower limit:");
    scanf("%d",&m);
    printf("enter the upper limit:");
    scanf("%d",&n);
    printf("the prime number in the range");
    count=0;
    for(i=m;i<=n;i++)
      {
        for(j=2;j<=i;j++)
        {
           if(i%j==0)
           count++;
        }
        if(count==1)
        printf(" %d ",i);
        count=0;
      }
    return 0;
}