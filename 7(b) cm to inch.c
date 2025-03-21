#include<stdio.h>

int main()
{
    float inch, cm;

    printf("Enter the Value in inches:");
    scanf("%f", &cm);

    inch = cm / 2.54;

    printf("\n\n%.2f cm = %.2f inches", cm, inch);

    return 0;
}
