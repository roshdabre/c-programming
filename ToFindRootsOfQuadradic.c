#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,t;
    float root1, root2;
    printf("\n Enter a,b,c :\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a == 0)
    {
        printf("\n This is not an quadratic equation");
        return 0;
    }
    t = b * b - 4 * a * c;
    if(t >= 0)
    {
        root1 =(-b + sqrt(t))/(2.0*a);
        root2 =(-b - sqrt(t))/(2.0*a);
        printf("\n Root1 - %.2f",root1);
        printf("\n Root2 = %.2f",root2);
    }
    else
    {
        printf("\n Roots of quadratic equation are imaginary.");
    }
    return 0;
}