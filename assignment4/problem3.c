/**
 * @file problem3.c
 * @author Jesus Gil (jgilgalindo1@toromail.csudh.edu)
 * @brief This program will print the number of occurrences for hexadecimals entered by the user
 * and display them.
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void printArray(int array[], int size);

int main(void) {

    int ch;

    // array declaration
    int numOfOccurencesList[16]; // number of indices: 0-15

    // initialize size of the array
    int size = sizeof(numOfOccurencesList) / sizeof(int);

    // intitalize all indexes of numOfOccurencesList to 0
    for(int i = 0; i < size; i++) {
        numOfOccurencesList[i] = 0;
    }

    // prompt the user to enter Hexadecimal
    printf("Enter a decimal integer (CTRL+Z/Enter to exit): ");
    
    // loop through all the inputs of the user 
    while((ch = getchar()) != EOF && ch != '\n') {
        if(ch >= '0' && ch <= '9') {            // increments for hex values of 0-9
            ++numOfOccurencesList[ch - '0']; 
        }
        if(ch >= 'A' && ch <= 'F') {
            ++numOfOccurencesList[ch - 55];    // increments for hex values of A-F
        }
    }
    // prints the list of uppercase hexadecimals 
    printf("Digit:\t    ");
    for(int digits = 0; digits <= 15; digits++) {
        printf("%X ", digits);
    }
    // prints the number of occurences 
    printf("\nOccurences: ");
    printArray(numOfOccurencesList, size);

    return 0;
}

/**
 * @brief Simply displays the elements in an integer array
 * 
 * @param array 
 */
void printArray(int array[], int size) {
    
    // traverse through array to print every element
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}