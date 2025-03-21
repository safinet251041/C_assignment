#include<stdio.h>

int main()
{
    double n, sum;

    printf("Enter a number: ");
    scanf("%lf", &n);

    sum = n * n;

    printf("\nSquare number of n = %lf", sum);

    return 0;
}
