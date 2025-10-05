#include <stdio.h>
int add() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    return a+b;
}

int main() {
    printf("Sum is = %d", add());
    return 0;
}