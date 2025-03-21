#include<stdio.h>
#include<math.h>

int main()
{
    double n, result;

    printf("Enter a number: ");
    scanf("%lf", &n);

    result = sqrt(n);

    printf("Square root = %lf", result);
}
