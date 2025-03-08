#include<stdio.h>
int main()
{
    int i;
    printf("\nNumbers between 1 to 100 are:\n");
    i = 1;
    do
    {
        printf("\t %d",i);
        ++i;
    }
    while(i <= 100);
    return 0;
}