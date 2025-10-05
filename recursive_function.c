#include <stdio.h>

// Function prototype for recursive factorial
long long factorialRecursive(int n);

// Main function
int main() {
    int num;
    long long resultRecursive = 1, resultLoop = 1;

    // Input from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Recursive factorial
    resultRecursive = factorialRecursive(num);

    // Factorial using for loop
    for (int i = 1; i <= num; i++) {
        resultLoop *= i;
    }

    // Display results
    printf("Factorial of %d using recursion = %lld\n", num, resultRecursive);
    printf("Factorial of %d using for loop  = %lld\n", num, resultLoop);

    return 0;
}

// Recursive function to calculate factorial
long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}
