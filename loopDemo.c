#include <stdio.h>

int main(void) {

    int n = 0, sum = 0;

    while(n <= 100) {
        sum = sum + n; //n * (n + 1) / 2; // n(n + 1) / 2
        n++;
    }

    printf("%d", sum);
    return 0;
}