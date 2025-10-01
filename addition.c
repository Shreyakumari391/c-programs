#include <stdio.h>
int main () {
    int num1, num2, sum;

    // Ask the user to input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the result
    printf("Sum: %d\n", sum);

    return 0;

}