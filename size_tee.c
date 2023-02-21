#include <stdio.h>
#include <stddef.h>

int main() {
    size_t arr_size = 5;
    int arr[arr_size];

    for (size_t i = 0; i < arr_size; i++) {
        arr[i] = i * i;
    }

    printf("The elements of the array are: ");
    for (size_t i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
