#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int factorial(int); // function prototype

int factorial(int n)
{
    if (n == 0)
    { // base case: Factorial(0) = 1.
        return 1;
    }
    return n * factorial(n - 1); // Recursive Step
}

int main(void)
{

    // variable declaration
    int n = 0;
    char choice = 'y';

    printf("Enter a positive value: ");
    scanf("%d", &n);

    if (n < 0)
    {
        // input validation
        do
        {
            // prompt user to enter a positive integer value
            printf("Value must be greater than zero! Try again? 'Y' or 'N'.\n");
            scanf(" %c", &choice);

            switch (toupper(choice))
            {
            case 'Y':
                printf("Enter a positive value: ");
                scanf(" %f", &n);
                break;
            case 'N':
                printf("Goodbye!");
                exit(0);
            }

        } while (n < 0);
    }

    printf("%d", factorial(n));
    return 0;
}