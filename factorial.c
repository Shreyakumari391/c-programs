#include <stdio.h>
int main() {
    int n, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    fact=1;
    for (int i=n; i>0; i--){
        fact = fact * i;
    }
    printf("Factorial of %d is: %d", n, fact);

    return 0;
}
