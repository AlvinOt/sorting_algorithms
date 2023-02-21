#include <stdio.h>

void bubble_sort(int arr[], size_t n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_array(int arr[], size_t n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main(void) {
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    printf("Before sorting: ");
    print_array(array, n);
    printf("\n");

    bubble_sort(array, n);

    printf("After sorting: ");
    print_array(array, n);
    printf("\n");

    return 0;
}

