

#include <stdio.h>
#include <math.h>

#define SIZE 100000

// declare function prototype
void sieveOfEratosthenes(int n);

int main(void) {
    int n;
    // declare variable n as user input
    // Prompt user to enter a value n > 2.
    printf("Enter a value greater than 1: ");
    scanf("%d", &n);
    getchar();
    // call function to print result
    sieveOfEratosthenes(n);
    // prompt user to quit program
    printf("\n\nPress enter to quit...");
    getchar();
    return 0;
}
/**
 * @brief The sieve of Eratosthenes running time is O(nlog(log(n))). 
 * This function simply takes the value as a max number to generate 
 * a sequence of primes to n
 * 
 * @param n 
 */
void sieveOfEratosthenes(int n) {
    // declare a list with index size of SIZE(100)
    int list[SIZE];
    int primeList[SIZE] = {0};

    // initialize an array of prime candidates with consecutive integers from 2 to n
    for(int p = 2; p <= n; p++) {
        list[p] = p;
    }
    // traverse through the list and attain the powers of 2
    for(int p = 2; p <= sqrt(n); p++) {
        if(list[p] != 0) {
            int j = p*p;
            while (j <= n)
            {
                list[j] = 0; // mark indexes as eliminated
                j = j + p;      
            }
        }
    }
    // copy the remaining elements of the list to another array with primes
    int primeNumberCount = 0;
    for(int p = 2; p <= n; p++) {
        if(list[p] != 0 ) {
            primeList[primeNumberCount] = list[p];
            primeNumberCount++;
        }
    }

    // initialize an array of prime candidates with consecutive integers from 2 to n
    /*
    for(int j = 2; j <= n; j++) {
        printf("Element[%d] = %d\n", j, list[j]);
    }
    */
    printf("Prime #'s of %d are: \n", n);
    for(int j = 0; j < primeNumberCount; j++) {
        printf("%d ", primeList[j]);
    }
}