#include <stdio.h>

int main() {
    int number;

    // Reading input
    printf("Enter a number (0-127): ");
    scanf("%d", &number);

    // Checking if the number is within the valid range
    if (number < 0 || number > 127) {
        printf("Invalid number\n");
        return 1;
    }

    // Displaying the number in hexadecimal
    printf("Hexadecimal: %02X\n", number);

    return 0;
}

