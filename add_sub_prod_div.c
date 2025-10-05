#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, prod;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    if (num2 != 0)
        div = (float) num1 / num2;
    else
        div = 0; // or handle error

    printf("\nResults:\n");
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);
    printf("Multiplication: %d\n", prod);
    if (num2 != 0)
        printf("Division: %.2f\n", div);
    else
        printf("Division: Error! Division by zero not allowed.\n");

    return 0;
}