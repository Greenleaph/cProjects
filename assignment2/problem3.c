#include <stdio.h>

int main(void) {
    float income = 0.0, taxDue = 0.0;
    // prompt the user to enter the amount of taxable income
    printf("Enter amount of taxable income: ");
    scanf("%f", &income);
    if(income <= 750) {
        taxDue = income * 0.01;         // taxDue is 1% of income
    }
    else if(income <= 2250) {
        taxDue = (7.5) + income * 0.02; // taxDue is sum of $7.50 and 2% of income over $750
    }
    else if(income <= 3750) {
        taxDue = (37.5) + income * 0.03; // taxDue is sum of $37.50 and 3% of income over $2,250
    }
    else if(income <= 5250) {
        taxDue = (82.5) + income * 0.04; // taxDue is sum of $82.50 and 4% of income over $3,750
    }
    else if(income <= 7000) {
        taxDue = (142.5) + income * 0.05; // taxDue is sum of $142.50 and 5% of income over $5,250 
    }
    else {
        taxDue = (230.0) + income * 0.06; // taxDue is sum of $230.00 and 6% of income over $7,000
    }
    // display tax due
    printf("Tax due is $%.2f.", taxDue);

    return 0;
}