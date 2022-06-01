#include <stdio.h>
int main()
{
    int a, b, x, y;
    printf("enter any two number :  ");
    scanf("%d%d", &x, &y);
    a = x;
    b = y;
    while (a != b)
    {
        if (a < b)
            a = a + x;
        else
            b = b + y;
    }
    printf("LCM of %d and %d is = %d\n", x, y, a);
    a = x;
    b = y;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("HCF of %d and %d is = %d\n", x, y, a);

    return 0;
}