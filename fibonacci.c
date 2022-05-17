#include <stdio.h>
int main()
{
    int n;
    long x = 0, y = 1, z;
    printf("enter the number of term :  ");
    scanf("%d", &n);
    printf("%ld   ", y);
    for (int i = 1; i < n; i++)
    {
        z = x + y;
        printf("%ld  ", z);
        x = y;
        y = z;
    }
    printf("\n ");
    return 0;
}