#include<stdio.h>
int main()
{
    float i,n,fact=1;
    printf("Enter the number to find its factorial:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %.2f is %.2f",n,fact);
    return 0;
}