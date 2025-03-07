#include<stdio.h>
void main ()
{
    int i,r,sum;
    sum = 0;
    i = 1;
    while (i <= 100)
    {
        r = i % 2;
        if (r == 0)
        {
            sum = sum + i;
        }
        ++i;
    }    
    printf("\n sum of even numbers from  q to 100 = %d",sum);
    getch();
}