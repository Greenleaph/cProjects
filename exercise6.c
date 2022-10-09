#include <stdio.h>

int main(void) {
    // n x n matrix
    int n = 100;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}