#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("The greatest number is: %d", a);
    }

    if (b > a && b > c)
    {
        printf("The greatest number is: %d", b);
    }

    if (c > a && c > b)
    {
        printf("The greatest number is: %d", c);
    }

    return 0;
}
