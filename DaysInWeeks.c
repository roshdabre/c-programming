#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number between 1 to 7\n");
    scanf("%d",&n);
    switch(n)
    {

        case 1:printf("Monday\n");break;
        case 2:printf("Tuesday\n");break;
        case 3:printf("wednesday\n");break;
        case 4:printf("Thursday\n");break;
        case 5:printf("Friday\n");break;
        case 6:printf("saturady\n");break;
        case 7:printf("Sunday\n");break;
        default :printf("Wrong number");break;

    }
    return 0;
}