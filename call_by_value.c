#include <stdio.h>
int modify(int x) {
    x = x + 5;
    return x;
}

int main() {
    int a=5;
    printf("Value of 'a' before calling function: %d\n", a);
    printf("Value of 'a' inside function: %d\n", modify(a));
    printf("Value of 'a' after calling function: %d\n", a);

    return 0;
}