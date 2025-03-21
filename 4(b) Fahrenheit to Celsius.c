#include<stdio.h>

int main()
{
    float C, F;

    printf("Input the tempherature:");
    scanf("%f", &F);

    C = ((F - 32) * 5) / 9;

    printf("\nThe tempherature in celcius:%f", C);

    return 0;
}