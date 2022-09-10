#include <stdio.h>
#include <math.h>

// define a symbolic constant of PI = 3.142857....
#define PI 3.142857

int main(void) {

    // declare input variables
    float height = 0.0, diameter = 0.0, rad = 0.0;

    // prompt user to enter height and diameter of a cylinder
    printf("This program will calculate and display the surface area and volume of a cylinder.\n");
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter diameter: ");
    scanf("%f", &diameter);

    // calculate the radius
    rad = diameter / 2.0;

    /*  calculate surface area and volume of the cylinder 
    *   sa = 2*pi*r(r + h)
    *   v = pi * r^2 * h
    */
    float sa = 2.0 * PI * rad * (rad + height);
    float v = PI * powf(rad, 2) * height;

    // display results
    printf("Surface Area:\t%2.2f", sa);
    printf("\nVolume:\t\t%2.2f", v);

    return 0;
}