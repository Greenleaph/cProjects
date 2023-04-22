#include <stdio.h>

#define N 5

void max_min(int a[], int n, int *max, int *min);

int main(void)
{

    int var1;
    char var2[10];

    printf("Address of var1 variable: %x\n", &var1);
    printf("Address of var2 variable: %x\n", &var2);

    // Pointer: A pointer is a variable whose value is the address of another variable
    // general syntax for a pointer:
    // data-type *var-name;

    // valid pointer variable names based off its data type

    int *ip;        /*Pointer for an integer*/
    double *dp, *q; /*Pointers for double*/
    float *fp;      /*Pointer for a float*/
    char *ch, *r;   /*Pointers for characters*/

    /*  How to Use Pointers?    */

    /*
    (a) We define a pointer variable,
    (b) assign the address of a variable to a pointer.
    (c) finally access the value at the address available in the pointer variable.
    */

    int var = 20; // actual variable declaration
    double pi = 3.14;

    ip = &var; // store the address of var in the pointer variable ip
    //*dp = pi;        DO NOT DO THIS!!!
    dp = &pi;

    // adress stored in ip variable
    printf("Address stored in ip variable: %x\n", ip);
    printf("Address stored in dp variable: %x\n", *&dp);
    // access the value using the pointer
    printf("Value of *ip variable: %d\n", *ip);
    printf("Value of *dp variable: %.2lf\n", *dp);

    // assigning two pointer equal to eachother
    //*dp = *q DO NOT DO THIS
    // DO THIS INSTEAD
    q = dp;
    printf("Value of *q variable: %.2lf\n", *q);
    *q = 0.1;
    printf("Value of *dp variable: %.2lf\n", *dp);

    int arr[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_min(arr, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    *max = *min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}
