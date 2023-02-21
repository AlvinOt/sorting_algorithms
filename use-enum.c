#include <stdio.h>
#include <stdlib.h>

enum colors {
    RED,
    GREEN,
    BLUE
};

typedef enum bool {
    false = 0,
    true
} bool;

int main() {
    enum colors c1, c2;
    c1 = RED;
    c2 = GREEN;

    if (c1 == RED) {
        printf("c1 is red\n");
    }

    switch (c2) {
        case RED:
            printf("c2 is red\n");
            break;
        case GREEN:
            printf("c2 is green\n");
            break;
        case BLUE:
            printf("c2 is blue\n");
            break;
    }

    bool b = true;

    if (b) {
        printf("b is true\n");
    } else {
        printf("b is false\n");
    }

    return 0;
}
