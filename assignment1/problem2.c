#include <stdio.h>

#define TAX 0.0675; // tax rate of the meal
#define TIP 0.2;   // 20% of the total after adding the tax  


int main(void) {
    // declare variables
    float subtotal = 0.0, taxAmount = 0.0, tipAmount = 0.0, totBill = 0.0, grandTot = 0.0;

    // prompt user to enter price of meal
    printf("Enter price of meal: ");
    scanf("%f", &subtotal);

    // calculate tax amount, tip amount, and total amount
    taxAmount = subtotal * TAX;
    totBill = subtotal + taxAmount;
    tipAmount = totBill * TIP;
    grandTot = totBill + tipAmount;

    printf("****************** Bill ******************\n");
    printf("Grand Total: \t\t\t$%2.2f", grandTot);
    printf("\nTotal Bill: \t\t\t$%2.2f", totBill);
    printf("\nSubtotal: \t\t\t$%.2f", subtotal);
    printf("\nSales Tax (6.75%%): \t\t$%2.2f", taxAmount);
    printf("\nTotal Tip (20%%): \t\t$%2.2f", tipAmount);

    return 0;
}