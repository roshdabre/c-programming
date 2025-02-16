#include<stdio.h>
void main()
{
    int num1,num2,num3,sum;

    printf("Enter 3 numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    sum = num1 + num2 + num3;

    printf("Sum of three numbers is %d",sum);
    getch();


}