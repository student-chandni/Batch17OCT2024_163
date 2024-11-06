#include <stdio.h>

int main() {
    unsigned char num;
    printf("Enter an 8-bit unsigned integer (in hex): ");
    scanf("%hhx", &num);

    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (num & (1 << i)) {
            count++;
        }
    }

    printf("Number of 1's: %d\n", count);
    return 0;
}

