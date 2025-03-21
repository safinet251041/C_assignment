#include<stdio.h>
#include<math.h>

int main()
{
    double b, h, hypotenuse, area, perimeter;

    printf("Enter base: ");
    scanf("%lf", &b);

    printf("Enter hight: ");
    scanf("%lf", &h);

    hypotenuse = sqrt(b * b + h * h);

    area = 0.5 * b * h;

    perimeter = b + h + hypotenuse;

    printf("Hypotenuse = %lf", hypotenuse);
    printf("\nArea = %lf", area);
    printf("\nPerimeter = %lf", perimeter);

    return 0;
}
