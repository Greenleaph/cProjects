#include <stdio.h>

// constant speed 
#define AIR 1100
#define WATER 4900
#define STEEL 16400

int main(void) {
    // variable declaration
    int code = 0;
    float distance = 0.0, time = 0.0; // Unit: ft/s

    // option menu
    printf("1. Air\n");
    printf("2. Water\n");
    printf("3. Steel\n");

    // prompt user to enter medium code
    printf("Enter a medium code (1-3): ");
    scanf("%d", &code);
    printf("\nEnter travel distance: ");
    scanf("%f", &distance);

    if(code == 1) {
        printf("*****Air*****\n");
        // calculate time of distance for AIR
        time = distance / AIR;
    }
    else if(code == 2) {
        printf("*****Water*****\n");
        // calculate time of distance for WATER
        time = distance / WATER;
    }
    else if (code == 3) {
        printf("*****Steel*****\n");
        // calculate time of distance for STEEL
        time = distance / STEEL;
    }
    else {
        printf("Invalid entry!");
        return -1;
    }
    // print the result
    printf("Time: %2.2f seconds", time); 
    return 0;
}