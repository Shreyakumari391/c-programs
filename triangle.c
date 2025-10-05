#include <stdio.h>

void printRightAngledTriangle(int rows);
void printEquilateralTriangle(int rows);

int main() {
    int rows;

    // Input the number of rows
    printf("Enter number of rows for the triangles: ");
    scanf("%d", &rows);

    printf("\nRight-Angled Triangle Pattern:\n");
    printRightAngledTriangle(rows);

    printf("\nEquilateral Triangle Pattern:\n");
    printEquilateralTriangle(rows);

    return 0;
}

// Function to print right-angled triangle
void printRightAngledTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print equilateral triangle (pyramid)
void printEquilateralTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        // Print stars
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("* ");
        }
        printf("\n");
    }
}
