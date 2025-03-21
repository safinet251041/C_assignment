#include<stdio.h>

int main()
{
    float inch, cm;

    printf("Enter the Value in inches:");
    scanf("%f", &inch);

    cm = inch * 2.54;

    printf("\n\n%.2f inches = %.2f cm", inch, cm);

    return 0;
}
