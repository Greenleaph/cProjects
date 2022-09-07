#include <stdio.h>

int main(void) {

    // prompt user to enter inputs
    float num1 = 0, num2 = 0, sum = 0, difference = 0, product = 0;
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);

    // calculations
    sum = num1 + num2;
    difference = num2 - num1;
    product = num1 * num2;

    // display results
    printf("The sum of %3.1f and %3.1f is %3.1f", num1, num2, sum);
    printf("\nThe difference of %3.1f and %3.1f is %3.1f", num1, num2, difference);
    printf("\nThe product of %3.1f and %3.1f is %3.1f", num1, num2, product);

    printf("\n\nPress enter to quit...");
    getchar();
    return 0;
} 