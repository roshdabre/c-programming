#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("\nEnter a number : ");
    scanf("%d",&n);
    f=fact(n);
    printf("\nFactorial = %d",f);
    return 0;
}
int fact(int n)
{
    if (n==1)
    return 1;
    else return (n*fact(n-1));
}