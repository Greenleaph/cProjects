#include <stdio.h>

int main(void) {
    int num = 0;
    int reversedNum1 = 0;
    int reversedNum2 = 0;
    int reversedNum3 = 0;

    int a = 0, b = 0, c = 0;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("The reversed is: %d%d%d", c, b, a);
    /*
    // 456 mod 10 is 56
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    reversedNum1 = (num % 10);
    reversedNum2 = (num / 10);
    reversedNum3 = (num % 100);
    printf("The reversal is: %d%d", reversedNum1, reversedNum2);
    printf("%d mod 100 is %d", num % 100);
    */

    return 0;
}