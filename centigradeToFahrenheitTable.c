#include <stdio.h>
/* print centigrade to fahrenheit as a table */
int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;              // lower limit of temperature table
    upper = 300;            // upper limit of temperature table
    step = 20;              // increments 

    celsius = lower;           // start fahrenheit at zero

    printf("Celsius\t\tFahrenheit\n");

    while (celsius <= upper)
    {
        /* code */
        fahr = (9.0/5.0 * celsius) + 32.0;
        printf("%3.0f\t\t%6.1f\t\n", celsius, fahr);
        celsius += step;
    }
    printf("Press enter to quit...");

    getchar();
    return 0;
}