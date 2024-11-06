#include <stdio.h>

int main() {
    int i, sum = 0;
    
    // Loop through numbers 1 to 6
    for (i = 1; i <= 6; i++) {
        int square = i * i;  // Calculate the square of i
        
        if (i % 2 == 0) {
            sum += square;  // Subtract square if i is even
        } else {
            sum -= square;  // Add square if i is odd
        }
    }
    
    printf("Sum of the series is: %d\n", sum);  // Output the sum of the series
    return 0;
}


