#include <stdio.h>
/* print fahrenheit to centigrade as a table */
int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;              // lower limit of temperature table
    upper = 300;            // upper limit of temperature table
    step = 20;              // increments 

    fahr = lower;           // start fahrenheit at zero

    printf("Fahrenheit\tCelsius\n");

    // while loop version
    while (fahr <= upper)
    {
        /* code */
        celsius = 5.0 * (fahr-32.0) / 9.0;
        printf("%3.0f\t\t%6.1f\t\n", fahr, celsius);
        fahr += step;
    }

    printf("For Loop version!\n\n");
    // for loop version
    for(fahr = lower; fahr <= upper; fahr += step) {
        /* code */
        celsius = 5.0 * (fahr-32.0) / 9.0;
        printf("%3.0f\t\t%6.1f\t\n", fahr, celsius);
    }
    printf("Press enter to quit...");

    getchar();
    return 0;
}