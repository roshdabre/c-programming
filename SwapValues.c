#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("\nValues of a and b before swap");
    printf("\na=%d, b=%d",a,b);
    swap(&a,&b);
    printf("\nValues of a and b after swap");
    printf("\na=%d, b=%d",a,b);
    return 0;
}
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}