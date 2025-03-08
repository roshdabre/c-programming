#include<stdio.h>
int main()
{
    int i;
    for(i = 5 ; i <= 122 ; ++i)
    {
        if(i > 90 && i <97)
        continue;
        printf("\n %c = %d",i,i);
    }
    return 0;
}