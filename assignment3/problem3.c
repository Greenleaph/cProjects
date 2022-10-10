/**
 * @file problem3.c
 * @author Jesus Gil (jgilgalindo1@toromail.csudh.edu)
 * @brief This program prints the average for a list of n numbers provided by the user as input and
 * excludes the minimum and maximum value. 
 * @version 0.1
 * @date 2022-10-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void) {
    int size = 0, count = 1;

    do {
        printf("How many numbers would you like to add? ");
        scanf("%d", &size);
    } while(size < 3); // input validation prompts user to enter n numbers > 3

    // initialize an integer array with size
    int numList[size];

    // prompt the user to enter all the numbers of size desired to add to the list 
    for(int i = 0; i < size; i++) {
        printf("Enter value for number %d: ", count);
        scanf("%d", &numList[i]);
        count++;
    }
    // variable declaration
    float avg = 0.0;
    int sum = 0, min = 0, max = 0;

    // assign min and max as the first index
    min = numList[0];
    max = numList[0];

    // traverse through the list to detect min and max
    for(int i = 0; i < size; i++) {
        // detect the max value
        if(numList[i] > max) {
            max = numList[i];
        }
        // detect the min value
        if(numList[i] < min) {
            min = numList[i];
        }
        // calculate the sum of the entire list
        sum += numList[i];
    }

    // remove the max and min values
    sum -= (max + min);
    // calculate the average excluding max and min
    avg = sum / (size - 2); // size minus two numbers (max & min)
    // output results
    printf("Max: %d", max);
    printf("\nMin: %d", min);
    printf("\nAverage: %.2f", avg);
    return 0;
}