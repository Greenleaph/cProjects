#include <stdio.h>

int main(void) {

    int size = 7;

    void printRightTriangle();
    void printRightTriangleReverse();
    void printUpsideDownRightTriangle();
    void printUpsideDownRightTriangleReverse();
    void printVerticalRectangle();
    void printVerticalRectangleIntegerDecreasing();
    void printVerticalRectangleIntegerIncreasing();
    void printKotlinKSymbol();
    void printUpsideDownPyramid();
    void printPyramid();

    //printUpsideDownRightTriangle();
    //printRightTriangle();
    //printVerticalRectangle();
    //printVerticalRectangleIntegerDecreasing();
    //printVerticalRectangleIntegerIncreasing();
    //printKotlinKSymbol();
    printRightTriangleReverse();
    //printUpsideDownRightTriangleReverse();

    //printUpsideDownPyramid();
    //printPyramid();

    return 0;
}

void printUpsideDownRightTriangle() {
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7 - i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printUpsideDownRightTriangleReverse() {
    for(int i = 1; i <= 7; i++) {
        printf("%d\t", i);
        for(int j = 0; j <= i; j++) {
            printf("  ");
        }
        for(int j = 0; j <= 7 - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printRightTriangle() {
    for(int row = 0; row < 7; row++) {
        for(int col = 0; col <= row; col++) {
            printf("*");
        }
        printf("\n");
    }
}

void printRightTriangleReverse() {
    for(int i = 1; i <= 7; i++) {
        printf("%d\t", i);
        for(int j = 0; j < 7 - i; j++) {
            printf(" ");
        }
        for(int j = 0; j < i; j++) {
            printf("X");
        }
        printf("\n");
    }
}

void printVerticalRectangle() {
    for(int i = 1; i <= 7; i++) {
        printf("%d\t", i);
        for(int j = 0; j < 7; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printVerticalRectangleIntegerDecreasing() {
    for(int row = 0; row < 7; row++) {
        for(int col = 7; col > 0; col--) {
            printf("%d", col);
        }
        printf("\n");
    }
}

void printVerticalRectangleIntegerIncreasing() {
    for(int row = 0; row < 7; row++) {
        for(int col = 1; col <= 7; col++) {
            printf("%d", col);
        }
        printf("\n");
    }
}

void printKotlinKSymbol() {
    // Upper half 
    for(int row = 0; row < 7; row++) {
        for(int col = 0; col < 7 - row; col++) {
            printf("* ");
        }
        printf("\n");
    }
    // lower half
    for(int row = 1; row <= 6; row++) {
        for(int col = 0; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }
}
void printUpsideDownPyramid() {
    for(int row = 1; row <= 7; row++) {
        printf("%d\t", row);
        for(int col = 0; col < row; col++) {
            printf("  ");
        }
        for(int col = 0; col <= 7 - row; col++) {
            printf("* ");
        }
        for(int col = 0; col < 7 - row; col++) {
            printf("* ");
        }
        printf("\n");
    }
}
void printPyramid() {
    for(int row = 1; row <= 7; row++) {
        printf("%d\t", row);
        for(int col = 0; col <= 7 - row; col++) {
            printf("  ");
        }
        for(int col = 0; col < row; col++) {
            printf("* ");
        }
        for(int col = 1; col < row; col++) {
            printf("* ");
        }
        printf("\n");
    }
}