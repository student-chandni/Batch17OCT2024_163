#include <stdio.h>

int main() {
    int i;
    for (i = 1; i < 11; i++) {
        printf("%d ", i * i - 1);  // n^2 - 1 for each i
    }
    printf("\n");
    return 0;
}

