#include <stdio.h>

int main() {
    unsigned char num;
    printf("Enter an 8-bit unsigned integer (in hex): ");
    scanf("%hhx", &num);

    // Interchange adjacent bits
    unsigned char result = ((num & 0xAA) >> 1) | ((num & 0x55) << 1);

    printf("Output: 0x%02X\n", result);
    return 0;
}

