#include <stdio.h> 

void printArray(int arr[], int size);
void selectionSort(int arr[], int size);
void selSort(int arr[], int size);
void bubbleSort(int arr[], int size);
void bubbleSort1(int arr[], int size);
void swap(int *a, int *b);
int binarySearch(int arr[], int size, int item);

int main(void) {
    int test[] = {1, 6, 3, 4, 2, 10};
    int size = sizeof(test) / sizeof(int);
    int num = 1;
    printf("Array before sort: ");
    printArray(test, size);
    printf("Array after sort: ");
    bubbleSort1(test, size);
    printArray(test, size);
    printf("Element %d is in index %d.", num, binarySearch(test, size, num));
    return 0;
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int min = i;
        for(int j = i + 1; j < size; j++) {
            // find the index of the ith smallest element
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        // swap function
        swap(&arr[min], &arr[i]);
    }
}

void selSort(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        int min = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void bubbleSort1(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            int next = j + 1;
            if(arr[j] > arr[next]) {
                swap(&arr[j], &arr[next]);
            }
        }
    }
}

int binarySearch(int arr[], int size, int item) {
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = (right + left) / 2;

        if(arr[mid] == item) {
            return mid;
        }
        if(arr[mid] < item) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    } 
    return -1;
}
/**
 * @brief Swap function
 * 
 * @param a 
 * @param b 
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}