/**
 * @file problem2.c
 * @author Jesus Gil (jgilgalindo1@toromail.csudh.edu)
 * @brief sorts two generated unordered lists of integer elements in decreasing order using the
 * bubblesort and selectionsort algorithm.
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Prototypes
void generateRangeOfRandomIntegers(int array[], int min, int max, int count);
void printArrayDecreasing(int array[], int size);
void printArray(int array[], int size);
void swap(int *a, int *b);
void selectionSort(int array[], int size);
void bubbleSort(int array[], int size);

// Driver Code
int main(void) {

    // generate random numbers by seeding rand with an initial value
    srand(time(0));

    // Array Declaration
    int array1[10];
    int array2[10];

    // initialize size of the arrays
    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);

    // call generateRangeOfRandomIntegers function
    generateRangeOfRandomIntegers(array1, -10, 10, 10);
    generateRangeOfRandomIntegers(array2, -10, 10, 10);

    // display results before sort array1 and array2
    printf("****** Results Before Sort *****");
    printf("\nArray 1 --> ");
    printArray(array1, size1);
    printf("Array 2 --> ");
    printArray(array2, size2);

    // call selectionSort function 
    selectionSort(array1, size1);
    bubbleSort(array2, size2);

    // display results after sorting array1 and array2
    printf("\n\n****** Results After Sort *****");
    printf("\nArray 1 (Selection Sort) --> ");
    printArrayDecreasing(array1, size1);
    printf("Array 2 (Bubble Sort)    --> ");
    printArrayDecreasing(array2, size2);

    return 0;
}

/**
 * @brief Generates a random number of integers (count) into a given array
 * 
 * @param array 
 * @param min 
 * @param max 
 * @param count 
 */
void generateRangeOfRandomIntegers(int array[], int min, int max, int count) {
    for(int i = 0; i < count; i++) {
        array[i] = (rand() % (max - min + 1)) + min;
    }
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

/**
 * @brief Simply displays the elements in an integer array in decreasing order
 * 
 * @param array 
 * @param size 
 */
void printArrayDecreasing(int array[], int size) {
    
    // traverse through array to print every element
    for(int i = size - 1; i > 0; --i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/**
 * @brief Swap function that swaps two elements using pointers
 * 
 * @param a 
 * @param b 
 */
void swap(int *a, int *b) { 
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
/**
 * @brief SelectionSort
 * 
 * @param array 
 * @param size 
 */
void selectionSort(int array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int min = i;
        for(int j = i + 1; j < size; j++) {
            // Find the index of the ith smallest element
            if(array[j] < array[min]) {
                min = j;
            }
        }
        // call the swap array function
        swap(&array[min], &array[i]);
    }
}
/**
 * @brief BubbleSort
 * 
 * @param array 
 * @param size 
 */
void bubbleSort(int array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        } 
    }
}