#include <stdio.h>

int main() {
    // Declare variables
    int n, sum = 0;

    // Get user input for the number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer for the number of terms.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate and display the sum of the series
    printf("Sum of the series up to %d terms: ", n);
    for (int i = 1, term = 0; i <= n; ++i) {
        term += 2 * i; // Calculate each term in the series
        sum += term;   // Accumulate the sum
    }

    printf("%d\n", sum);

    return 0;
}
