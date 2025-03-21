#include<stdio.h>

int main()
{
    int n, i;

    printf("Enter a poitive number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is not a prime number.", n);
    }

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number.", n);

            return 0;
        }
    }

    printf("%d is prime number.", n);

    return 0;
}
