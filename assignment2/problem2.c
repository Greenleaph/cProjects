#include <stdio.h>

int main(void) {
    // variable declaration
    int numOfSides = 0;
    // Triangle properties
    float side1 = 0.0, side2 = 0.0, side3 = 0.0;
    // prompt user to enter number of sides of a polygon
    printf("Enter number of sides for a polygon: ");
    scanf("%d", &numOfSides);
    if(numOfSides == 3) {
        // state entry is valid
        printf("Valid!\n");
        // prompt user to enter the three sides of the triangle at runtime
        printf("Enter length of all three sides (ex: 12.2 23 21.9)\n");
        scanf("%f%f%f", &side1, &side2, &side3);
        // flow condition
        // determine if triangle is equillateral, isosceles, or scalene
        if (side1 == side2 && side2 == side3) {
            printf("This triangle is equillateral.");
        }
        else if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("This triangle is isosceles.");
        }
        else {
            printf("This triangle is scalene.");
        }
        // print invalid entry
    } else {
        printf("Invalid!");
    }
    return 0;
}