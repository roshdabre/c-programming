#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i'||  ch=='o'|| ch=='u')
    {
        printf("\n %c is a vovel",ch);
    }
    else
    {
        printf("\n %c is a consonent",ch);
    }
    // getch();
    return 0;
}
