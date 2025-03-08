#include<stdio.h>
int main()
{
    int n,rno,r;
    printf("\n Enter number:");
    scanf("%d",&n);
    rno = 0;
    while (n != 0)
    {
        r = n%10;
        rno = rno*10 + r;
        n = n/10;
    }
    printf("\n Reverse no = %d",rno);
    return 0;
}