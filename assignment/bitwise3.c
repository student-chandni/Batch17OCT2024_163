#include <stdio.h>

int count_ones(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit unsigned integer (in hex): ");
    scanf("%x", &num);

    int ones_count = count_ones(num);
    int even_parity = (ones_count % 2 == 0);
    int odd_parity = !even_parity;

    printf("Even Parity: %d\n", even_parity);
    printf("Odd Parity: %d\n", odd_parity);
    return 0;
}

