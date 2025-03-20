#include<stdio.h>

int main()
{
    int a, b, c;

    a = 10;
    b = 20;

    printf("Before swaping: a = %d, b = %d", a, b);

    c = a;
    a = b;
    b = c;

    printf("\nAfter swapping: a = %d, b = %d", a, b);

    return 0;
}