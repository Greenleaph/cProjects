/**
 * @file problem1.c
 * @author Jesus Gil (jgilgalindo1@toromail.csudh.edu)
 * @brief This program returns the approximation e given a positive integer value n.
 *  
 * @version 0.1
 * @date 2022-10-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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
    int n = 0, fact = 0;
    float euler = 1.0f, sequence = 1.0f;
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
                scanf(" %d", &n);
                break;
            case 'N':
                printf("Goodbye!");
                exit(0);
            }

        } while (n < 0);
    }
    // starting value
    printf("1");
    // traverse through a range of integer numbers 1 to n.
    for(int i = 1; i <= n; i++) {
        fact = factorial(i);
        sequence = 1.0f/fact;
        euler += sequence; 
        printf(" + %.4f (1/%d)", sequence, fact);
    }    
    printf(" = %.4f", euler);
    return 0;
}