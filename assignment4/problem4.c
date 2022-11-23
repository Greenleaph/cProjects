/**
 * @file problem4.c
 * @author Jesus Gil (jgilgalindo1@toromail.csudh.edu)
 * @brief Takes a string that encrypts or dycrypts its characters
 * @version 0.1
 * @date 2022-10-26
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// function prototype
void caesarEncryption(char phrase[], int shiftAmnt, int size);
void caesarDecryption(char phrase[], int shiftAmnt, int size);

int main(void)
{
    // declare array and char variable to hold word phrase and key shifts
    char phrase[300];
    char ch;
    int size = sizeof(phrase) / sizeof(int);
    int shiftAmnt; // between 1-25

    // declare variable choice to choose between enyption or dycrption
    char choice = ' ';
    // prompt the user to enter whether they want to encypt or dycrypt a message
    printf("Enter (E) to Encrypt or (D) to Dycrypt: ");
    scanf("%c", &choice);
    getchar();
    // menu
    switch (toupper(choice))
    {
    case 'E':
        caesarEncryption(phrase, shiftAmnt, size);
        break;
    case 'D':
        caesarDecryption(phrase, shiftAmnt, size);
        break;
    default:
        printf("Invalid Entry!");
        break;
    }
    return 0;
}

/**
 * @brief caesarEncryption
 *
 * @param phrase
 * @param shiftAmnt
 * @param size
 */
void caesarEncryption(char phrase[], int shiftAmnt, int size)
{
    printf("Enter message to be encrypted: ");
    gets(phrase);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmnt);
    // traverse through phrase
    for (int i = 0; i < size; ++i)
    {
        char ch = phrase[i];
        // perform input validation to check if input
        // is a alphanumeric character or not
        if (islower(ch))
        {
            ch = (ch - 'a' + shiftAmnt) % 26 + 'a'; // lower case
        }
        if (isupper(ch))
        {
            ch = (ch - 'A' + shiftAmnt) % 26 + 'A'; // upper case
        }
        if (isdigit(ch))
        {
            ch = (ch - '0' + shiftAmnt) % 10 + '0'; // digits
        }
        // store encrpted message to array
        phrase[i] = ch;
    }
    printf("Encrypted Message: %s", phrase); // print encrypted message
}
/**
 * @brief caesarDecryption
 *
 * @param phrase
 * @param shiftAmnt
 * @param size
 */
void caesarDecryption(char phrase[], int shiftAmnt, int size)
{
    printf("Enter message to be decrypted: ");
    gets(phrase);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shiftAmnt);
    // traverse through phrase
    for (int i = 0; i < size; ++i)
    {
        char ch = phrase[i];
        // perform input validation to check if input
        // is a lowercase, uppcase, and digit character
        if (islower(ch))
        {
            ch = (ch - 'a' - shiftAmnt + 26) % 26 + 'a'; // lower case
        }
        if (isupper(ch))
        {
            ch = (ch - 'A' - shiftAmnt + 26) % 26 + 'A'; // upper case
        }
        if (isdigit(ch))
        {
            ch = (ch - '0' - shiftAmnt + 10) % 10 + '0'; // digits
        }
        // store encrpted message to array
        phrase[i] = ch;
    }
    printf("Decrypted Message: %s", phrase); // print encrypted message
}