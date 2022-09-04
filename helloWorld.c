#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    getchar();
    printf("My age is %d\n", age);

    if(age <= 18) {
        printf("At %d, you have a long life ahead of you sonny boi!");
    }
    else if(age < 55) {
        printf("Wow! %d years old ey? Big boi indeed!");
    } else {
        printf("Dang! It's time to retire at %d old timer!");
    }
    getchar();
    return 0;
}