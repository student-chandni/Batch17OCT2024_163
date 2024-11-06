#include <stdio.h>

int main() {
    int i, value = 1;
    for (i = 0; i < 7; i++) {
        printf("%d ", value);
        value *= 2;  // Multiply by 2 for next term
    }
    printf("\n");
    return 0;
}

