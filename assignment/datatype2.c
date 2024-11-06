#include <stdio.h>

int main() {
    char choice;

    // Reading input
    printf("Enter your choice (y/Y/n/N): ");
    scanf(" %c", &choice);

    // Displaying corresponding message
    if (choice == 'y' || choice == 'Y') {
        printf("Yes\n");
    } else if (choice == 'n' || choice == 'N') {
        printf("No\n");
    } else {
        printf("Invalid character\n");
    }

    return 0;
}

