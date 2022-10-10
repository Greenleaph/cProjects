/**
 * @file problem6.c
 * @author Jesus Gil (jgilgalindo1@toromail.csudh.edu)
 * @brief This program will print a hollow triangle as a cutout provided 
 * by n number of rows by the user
 * @version 0.1
 * @date 2022-10-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void) {
    // prompt the user to enter a positive integer
    int n;
    int gap = 1;

    printf("Enter an a positive integer value: ");
    scanf("%d", &n);
    
    int m = n;
    int seq = (2*n)-1;
    char ch = 'X';

    printf("1. ");
    for(int i = 0; i < seq; i++) {
        printf("%c", ch);
    }
    printf("\n");

    for(int j = 2; j <= m; j++) { // This for loop will simply print the line numbers
        printf("%d. ", j);
        n--;

        for(int k = 0; k < n; k++) { // this loops displays the ch before the gaps
            printf("%c", ch);
        }
        for(int k = 0; k < gap; k++) { // this for loop displays the gaps
            printf(" ");
        }
        for(int j = n; j > 0; j--) { // output ch after the gaps
            printf("%c", ch);
        }
        gap += 2; // increment gap by two 
        printf("\n");
    }
    return 0;
}