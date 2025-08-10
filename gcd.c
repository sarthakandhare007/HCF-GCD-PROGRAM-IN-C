#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, i, start;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &x, &y);

    // Find smaller number and store in start
    if (x < y)
        start = x;
    else
        start = y;

    // Initialize i in the for loop
    for (i = start; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            printf("GCD is %d", i);
            break;
        }
    }

    getch();
}