#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("\nEnter number:");
    scanf("%d",&n);
    sum = 0;
    i = 1;
    while(i <=n)
    {
        sum = sum + i;
        ++i;
    }
    printf("\nsum = %d",sum);
    return 0;
}
   
