#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a 32-bit unsigned integer (in hex): ");
    scanf("%x", &num);

    unsigned int result = ((num & 0x000000FF) << 24) |
                          ((num & 0x0000FF00) << 8) |
                          ((num & 0x00FF0000) >> 8) |
                          ((num & 0xFF000000) >> 24);

    printf("Output: 0x%08X\n", result);
    return 0;
}

