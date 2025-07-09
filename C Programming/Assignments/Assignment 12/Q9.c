//9. Reverse the given array.

#include <stdio.h>
#include <stdlib.h>

void StoreArray(int*, int);
void PrintArray(int*, int);
void ReversePrint(int*, int);

int main() {
    int *arr;
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    arr = (int*) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements of array:\n");
    StoreArray(arr, size);

    printf("Original array:\n");
    PrintArray(arr, size);

    printf("Reversed array (printing):\n");
    ReversePrint(arr, size);

    free(arr); 
    return 0;
}

void StoreArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &ptr[i]);
    }
}

void PrintArray(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void ReversePrint(int* ptr, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}