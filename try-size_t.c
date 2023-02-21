#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t n = sizeof(array) / sizeof(array[0]);
    printf("The number of elements in the array is: %zu\n", n);
    return 0;
}
