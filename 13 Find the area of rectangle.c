#include<stdio.h>

int main()
{
    double l, w, area;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &l);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &w);

    area = l * w;

    printf(" The area of rectangle: %lf", area);

    return 0;
}
