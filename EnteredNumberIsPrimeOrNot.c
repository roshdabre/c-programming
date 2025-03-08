#include<stdio.h>
void main()
{
    int n,i,r;
    printf("Enter a number :",&n);
    scanf("%d",&n);
    i = 2;
    while (i <= n/2)
    {
        r = n % i;
        if (r == 0)
        {
            printf("\n %d is composite",n);
                        goto x;
        }
                    i++;
    }
                printf("\n %d is prime",n);
            x:
            return 0;
}
    
    
