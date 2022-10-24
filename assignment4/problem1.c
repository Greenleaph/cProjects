#include <stdio.h>

// function prototype
void printArray(float array[], int size);

int main(void) {
    // declare array 
    float weeklyGasPrices[7];
    // initialize size of the array
    int size = sizeof(weeklyGasPrices) / sizeof(int);
    // initialize gas prices to 0
    for(int i = 0; i < size; i++) {
        weeklyGasPrices[i] = 0;
    }
    printArray(weeklyGasPrices, size);
    return 0;
}

/**
 * @brief Simply displays the elements in an integer array
 * 
 * @param array 
 */
void printArray(float array[], int size) {
    
    // traverse through array to print every element
    for(int i = 0; i < size; i++) {
        printf("\n%d ", array[i]);
    }
    printf("\n");
}