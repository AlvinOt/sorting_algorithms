#include <stdio.h>
#include <stdbool.h>

int main() {
    bool is_raining = true;
    bool is_sunny = false;

    if (is_raining) {
        printf("It's raining.\n");
    } else {
        printf("It's not raining.\n");
    }

    if (is_sunny) {
        printf("It's sunny.\n");
    } else {
        printf("It's not sunny.\n");
    }

    return 0;
}
