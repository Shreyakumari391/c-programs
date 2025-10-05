#include <stdio.h>

void swapValue(int x, int y) { 
    int temp = x; x = y; y = temp; 
    printf("Inside swapValue: a=%d, b=%d\n", x, y);
}

void swapRef(int *x, int *y) { 
    int temp = *x; *x = *y; *y = temp;

}

int main() { 
    int a=10, b=20; 
    swapValue(a, b); 
    printf("After call by value: a=%d, b=%d\n", a, b);

swapRef(&a, &b);

printf("After call by reference: a=%d, b=%d\n", a, b);

return 0;

}