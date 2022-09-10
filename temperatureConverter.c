#include <stdio.h>

int main(void) {
    // variable initialization
    float value1 = 0.0, value2 = 0.0, fahr = 0.0, celsius = 0.0;

    // prompt user to enter temperature value for fahrenheit
    // and for celsius
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &value1);
    printf("Enter temperature in celsius: ");
    scanf("%f", &value2);

    // convert celsius to fahrenheit
    fahr = (9.0/5.0) * value2 + 32;
    celsius = 5.0 * (fahr-32.0) / 9.0;

    // display results
    printf("Celsius\t\tFahrenheit");
    printf("\n%2.2f\t\t%2.2f", value2, fahr);

    printf("\nFahrenheit\tCelsius");
    printf("\n%2.2f\t\t%2.2f", value1, celsius);

    return 0;
}