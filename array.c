#include <stdio.h>

int multiply(int *arr, int n) {
    int i, mul = 1;
    for(i = 0; i < n; i++) {
        mul = mul * arr[i];
    }
    return mul;
}

int main() {
    int arr[10], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    result = multiply(arr, n);

    printf("Multiplication of numbers = %d\n", result);

    return 0;
}