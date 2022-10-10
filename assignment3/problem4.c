#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    // data
    float betBal = 0.0f;
    char option = 'y';

    // prompt user to enter amount of money
    printf("Slot machine charges $10.00 for every play!");
    printf("\nEnter bet amount into the slot machine: ");
    scanf("%f", &betBal);
    if (betBal < 10)
    {
        do
        {
            printf("\nYour current balance is %.2f. You must pay at least $10.00 to play!", betBal);
            printf("\nWould you like to play ('y' or 'n')? ");
            scanf("%c", &option);

            switch (toupper(option))
            {
            case 'Y':
                printf("\nEnter bet amount into the slot machine: ");
                scanf("%f", &betBal);
                break;
            case 'N':
                printf("Balance: $%.2f", betBal);
                printf("\nThank you for playing!");
                printf("\nGoodbye!");
                exit(0);

            default:
                printf("Invalid entry. Try again!\n");
                break;
            }
        } while (betBal < 10.0f);
    }
    return 0;
}