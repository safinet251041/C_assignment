#include<stdio.h>

int main()
{
    double score;

    printf("Enter the score: ");
    scanf("%lf", &score);

    if (score >= 80 && score <= 100)
    {
        printf("Grade: A+");
    }
    else
    if (score >= 75 && score <= 79)
    {
        printf("Grade: A");
    }
    else
        if (score >= 70 && score <= 74)
    {
        printf("Grade: A-");
    }
    else
        if (score >= 65 && score <= 69)
    {
        printf("Grade: B+");
    }
    else
        if (score >= 60 && score <= 64)
    {
        printf("Grade: B");
    }
    else
        if (score >= 55 && score <= 59)
    {
        printf("Grade: B-");
    }
    else
        if (score >= 50 && score <= 54)
    {
        printf("Grade: C+");
    }
    else
        if (score >= 45 && score <= 49)
    {
        printf("Grade: C");
    }
    else
        if (score >= 40 && score <= 44)
    {
        printf("Grade: D");
    }
    else
        if (score >= 0 && score <= 39)
    {
        printf("Grade: F");
    }
    else
    {
        printf("Invalid score.");
    }

    return 0;
}
