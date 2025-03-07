#include<stdio.h>
int main ()
{
    int n,f,i;
    printf("\n Enter n");
    scanf("%d",&n);
    f = 1;
    i = 1;
    while(i <= n)
    {   
        f =f * i;
        ++i;
    }
    printf("\n factorial = %d",f);
    getch();
}