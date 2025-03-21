#include<stdio.h>

int main()
{
    float C, F;

    printf("Input the tempherature:");
    scanf("%f", &C);

    F = (C + 32) * (9 / 5);

    printf("\nThe tempherature in Fahrenheit:%f", F);

    return 0;
}
