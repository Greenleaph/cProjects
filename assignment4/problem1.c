/**
 * @file problem1.c
 * @author Jesus Gil (jgilgalindo1@toromaill.csudh.edu)
 * @brief prints a bar of astericks indicating the the gas prices for the week provided by user input
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

// function prototype
void printArray(float array[], int size);

int main(void) {
    // declare array 
    // hard code the prices
    float weeklyGasPrices[7];
    char weekDays[7][5] = { "Mon:", "Tue:", "Wed:", "Thu:", "Fri:", "Sat:", "Sun:" };
    // initialize size of the array
    int size = sizeof(weeklyGasPrices) / sizeof(int);
    // prompt user to enter gas prices for the week
    printf("Enter gas prices for the week: \n");
    for(int i = 0; i < size; i++) {
        printf("%s ", weekDays[i]);
        scanf("%f", &weeklyGasPrices[i]);
    }
    // find the base price
    float basePrice = weeklyGasPrices[0];
    for(int i = 0; i < size; i++) {
        if(weeklyGasPrices[i] < basePrice) {
            basePrice = weeklyGasPrices[i];
        }
    }
    basePrice = floorf(basePrice);

    // print banner
    printf("***DATA***\n");

    for(int i = 0; i < size; i++) {
        printf("%s\t", weekDays[i]);
        int count = 0;
        for(float j = basePrice + .1f; j < weeklyGasPrices[i]; j+=.1f) {
            printf("*");
            count++;
        }
        printf("%d", count);
        printf("\n");
    }
    return 0;
}