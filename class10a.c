first question:-

1.	#include <stdio.h>
2.	#include <stdbool.h>

3.	// Function to check if a number is prime
4.	bool isPrime(int num) {
5.	if (num <= 1) return false;
6.	for (int i = 2; i <= num / 2; i++) {
7.	if (num % i == 0) return false;
8.	}
9.	return true;
10.	}

11.	int main() {
12.	int num, count = 0;
13.	printf("Enter a positive integer: ");
14.	scanf("%d", &num);

15.	printf("Output:\n");
16.	for (int i = 2; i <= num / 2; i++) {
17.	if (isPrime(i) && isPrime(num - i)) {
a.	printf("%d = %d + %d\n", num, i, num - i);
b.	count++;
18.	}
19.	}

20.	if (count == 0) {
21.	printf("NoofWays = -1\n");
22.	} else {
23.	printf("NoofWays = %d\n", count);
24.	}

25.	return 0;
26.	}



Fifth question:-

1.	  #include <stdio.h>

2.	1.void printAlphabetTriangle(int n) {
3.	for (int i = 1; i <= n; i++) {
4.	for (int j = i; j < n; j++) {
a.	printf(" ");
5.	}
6.	for (int j = 0; j < i; j++) {
a.	printf("%c", 'A' + j);
7.	}
8.	for (int j = i - 2; j >= 0; j--) {
a.	printf("%c", 'A' + j);
9.	}
10.	printf("\n");
11.	}
12.	}

13.	void printNumberTriangle(int n) {
14.	for (int i = 1; i <= n; i++) {
15.	for (int j = i; j < n; j++) {
a.	printf(" ");
16.	}
17.	for (int j = 1; j <= i; j++) {
a.	printf("%d", j);
18.	}
19.	for (int j = i - 1; j >= 1; j--) {
a.	printf("%d", j);
20.	}
21.	printf("\n");
22.	}
23.	}

24.	int main() {
25.	int n = 5;

26.	printf("Alphabet Triangle:\n");
27.	printAlphabetTriangle(n);

28.	printf("\nNumber Triangle:\n");
29.	printNumberTriangle(n);

30.	return 0;
31.	}
32.	


Second question:-
  #include <stdio.h>
#include <math.h>

void findNthNumber(int n) {
    int digits[] = {1, 4, 6, 9};
    int base = 4; // Since we have 4 digits to use
    int result = 0;
    int place = 1;

    while (n > 0) {
        result += digits[(n - 1) % base] * place;
        n = (n - 1) / base;
        place *= 10;
    }

    printf("%d\n", result);
}

int main() {
    int T, N;
    printf("Enter number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        printf("Enter the value of N: ");
        scanf("%d", &N);
        findNthNumber(N);
    }

    return 0;
}


3.   #include <stdio.h>
#include <stdlib.h>

int is_prime_digit(int digit) {
    return digit == 2 || digit == 3 || digit == 5 || digit == 7;
}

void generate_prime_digit_numbers(int n, int *result) {
    int count = 0;
    int number = 0;
    while (count < n) {
        number++;
        int temp = number;
        int is_valid = 1;
        while (temp > 0) {
            if (!is_prime_digit(temp % 10)) {
                is_valid = 0;
                break;
            }
            temp /= 10;
        }
        if (is_valid) {
            result[count++] = number;
        }
    }
}

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int *result = (int *)malloc(N * sizeof(int));
        generate_prime_digit_numbers(N, result);
        printf("%d\n", result[N - 1]);
        free(result);
    }
    return 0;
}


4.  #include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateEveryK(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        int end = (i + k - 1 < n) ? i + k - 1 : n - 1;
        reverse(arr, i, end);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotateEveryK(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
