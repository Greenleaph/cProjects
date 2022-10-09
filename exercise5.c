#include <stdio.h>

int main(void) {

    for(int row = 0; row < 8; row++) {
        for(int col = 0 ; col < 6; col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}