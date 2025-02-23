#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,s,choice;
    printf("1] addition\n");
    printf("2] subtraction\n");
    printf("3] multiplication\n");
    printf("4] division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    switch (choice)
    {
        case 1: s=a+b;
        printf("\n%d + %d = %d",a,b,s);break;
        case 2: s=a-b;
        printf("\n%d - %d = %d",a,b,s);break;
        case 3: s=a*b;
        printf("\n%d * %d = %d",a,b,s);break;
        case 4: if(b != 0) {
                    s=a/b;
                    printf("\n%d / %d = %d",a,b,s);
                } else {
                    printf("\nDivision by zero error");
                }
                break;
        default: printf("\nInvalid choice");
    }
    getch();
}
