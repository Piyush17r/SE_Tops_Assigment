#include <stdio.h>
main()
{
    int n, sum = 0, firstdigit, lastdigit;

    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);

    lastdigit = n % 10;
    printf("\n The Last digit : %d", lastdigit);

    while (n >= 10)
    {
        n = n / 10; // n/=10; //
    }

    firstdigit = n;
    printf("\n The First digit : %d", firstdigit);

    sum = firstdigit + lastdigit;
    printf("\n\n Sum of First and Last Digit = %d", sum);
}