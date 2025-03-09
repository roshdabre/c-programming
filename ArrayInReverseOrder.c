#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter Elements of an array");
    for (i = 0; i < 10; ++i)
    {
        scanf("%d",&a[i]);
    }
    printf("\n content of an array in reverse order:");
    for (i = 9;i >= 0; --i)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}