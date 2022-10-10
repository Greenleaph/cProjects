#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

void printRandomNumber(int, int, int); // function prototype for random number generator

void printRandomNumber(int lower, int upper, int count)
{
    for (int i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}

int main(void)
{
    // data
    float betAmnt = 0.0f, totBal = 0.0f, win = 0.0f;
    char option = 'y';

    totBal = betAmnt;

    // prompt user to enter amount of money
    printf("Slot machine charges $10.00 for every play!");
    printf("\nEnter bet amount into the slot machine: ");
    scanf("%f", betAmnt);

    if (betAmnt < 10)
    {
        do
        {
            printf("\nYour current balance is $%.2f. You must pay at least $10.00 to play!");
            printf("\nWould you like to add more money ('y' or 'n')? ");
            scanf("%c", &option);

            switch (toupper(option))
            {
            case 'Y':
                printf("\nEnter bet amount into the slot machine: ");
                scanf("%f", &betAmnt);
                totBal += betAmnt;
                break;
            case 'N':
                totBal += betAmnt;
                printf("Balance: $%.2f", totBal);
                printf("\nThank you for playing!");
                printf("\nGoodbye!");
                exit(0);

            default:
                printf("Invalid entry. Try again!\n");
                break;
            }
        } while (betAmnt < 10.0f);
    }
    return 0;
}