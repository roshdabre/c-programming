#include<stdio.h>
int main()
{
    int n,r,sum;
    printf("\n Enter a number:");
    scanf("%d",&n);
    sum = 0;
    while(n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("\n Sum of the entered number is %d",sum);
    return 0;

}