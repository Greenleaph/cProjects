#include <stdio.h>
#include <ctype.h>

#define PACKA 9.95
#define PACKB 13.95
#define PACKC 19.95

int main(void) {
    char ch = ' ';
    float totHours = 0, extraHours = 0;
    float savingsPackB = 0.0, savingsPackC = 0.0, totBill = 0.0;

    // display user options
    printf("*******************************************************************\n");
    printf("* A.\t$%.2f/mo  | 10hr access | extended hours @ $2.00/hr.\t  *\n", PACKA);
    printf("* B.\t$%.2f/mo | 20hr access | extended hours @ $1.00/hr.\t  *\n", PACKB);
    printf("* C.\t$%.2f/mo | unlimited access.\t\t\t\t  *\n", PACKC);
    printf("*******************************************************************\n");

    // prompt user to a letter of a service package
    printf("Enter letter package: ");
    scanf("%c", &ch);
    printf("Enter number of hours used: ");
    scanf("%f", &totHours);
    switch (toupper(ch))
    {
        case 'A':
            printf("Use chose package %c.\n", toupper(ch));
            // calculate the total bill for customer with package A
            // if package A customer exceeds 10 hours, 
            // then add additional charge to total bill
            if(totHours > 10.0 || totHours < 20.0) {
                extraHours = totHours - 10.0;
                totBill = PACKA + extraHours * 2.0;
                printf("Extended Hours: %.1f\n", extraHours);
                // calculate total savings for package B and C
                if(totHours > 20.0) {
                    extraHours = totHours - 20.0;
                    savingsPackB = totBill - (PACKB + extraHours * 1.0);  
                }
            } else {
                totBill = PACKA;
            }
            
            savingsPackC = totBill - PACKC;

            // package B savings
            printf("Package B Savings: ");
            if(savingsPackB > 0) {
                printf("$%.2f w/ %.1f extended hours.\n", savingsPackB, extraHours);
            } else {
                printf("No Savings.\n");
            }
            // package C savings
            printf("Package C savings: ");
            if(savingsPackC > 0) {
                printf("$%.2f\n", savingsPackC);
            } else {
                printf("No Savings.\n");
            }
            break;
        case 'B':
            printf("Use chose package %c.\n", toupper(ch));
            // calculate the total bill for customer with package A
            if(totHours > 20.0) {
                extraHours = totHours - 20.0; 
                totBill = PACKB + extraHours * 1.0;
                printf("Extended Hours: %.1f\n", extraHours);
            } else {
                totBill = PACKB;
            }
            // package C savings
            savingsPackC = totBill - PACKC;
            printf("Package C savings: ");
            // determine if there would be savings
            if(savingsPackC > 0.0) {
                printf("$%.2f\n", savingsPackC);
            } else {
                printf("No savings.\n");
            }
            break;
        case 'C':
            printf("Use chose package %c.\n", toupper(ch));
            // calculate the total bill for customer with package A
            totBill = PACKC;
            break;
        default:
            printf("Invalid Entry.");
            break;
    }
    printf("Total Charge: $%.2f\n", totBill);
    
    return 0;
}