#include<stdio.h>
int main()
{
    int i,r,q;
    printf("\nOdd numbers between 1 to 100 are:\n");
    i=1;
    do
    {
        r = i % 1;
        if (i % 2 != 0)
        { 
            printf("\t%d ", i);
        }
        i++;
    } 
    while (i <= 100);
    return 0;
    
}