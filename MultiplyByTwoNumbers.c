#include<stdio.h>
int main()
{
    int num1, num2, mult;

    printf("Enter 2 numbers\n");
    scanf("%d %d",&num1,&num2);

    mult = num1 * num2;

    printf("Multiplication of two numbers is %d\n",mult);
    return 0;


}