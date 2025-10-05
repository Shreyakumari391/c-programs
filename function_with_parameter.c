#include <stdio.h>
int add(int x, int y) {
    return x+y;
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Sum = %d", add(a,b));
    return 0;

}