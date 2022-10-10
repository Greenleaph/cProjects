/**
 * @file problem5.c
 * @author Jesus Gil (jgilgalindo1@toromail.csudh.edu)
 * @brief This program will print an inverted half hour glass with n numbers of rows.
 * User may also add a different character to their liking
 * @version 0.1
 * @date 2022-10-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int n = 0; // variable declaration
    int count = 1;
    char ch = 'X';
    // prompt the user to enter a positive integer
    printf("Enter an a positive integer value: ");
    scanf("%d", &n);
    // upper half
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d\t", count);
        for (int j = n-i; j > 1; j--)
        {
            printf(" ");
        }
        for(int k = i; k >= 0; k--) {
            printf("%c",ch);
        }
        printf("\n");
        count++;
    }
    // lower half
    for (int i = 2; i <= n; i++)
    {
        printf("%d\t", count);
        for (int j = n-i; j > 0; j--)
        {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf("%c", ch);
        }
        printf("\n");
        count++;
    }
    return 0;
}