#include <stdio.h>

// Function declarations
void inputMatrix(int matrix[10][10], int rows, int cols);
void printMatrix(int matrix[10][10], int rows, int cols);
void addMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols);
void subtractMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols);
void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10], int r1, int c1, int c2);
void transposeMatrix(int matrix[10][10], int transpose[10][10], int rows, int cols);

int main() {
    int A[10][10], B[10][10], result[10][10], rows1, cols1, rows2, cols2;

    // Input dimensions for matrices
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d%d", &rows1, &cols1);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d%d", &rows2, &cols2);

    // Input matrices
    printf("\nEnter elements of Matrix A:\n");
    inputMatrix(A, rows1, cols1);

    printf("\nEnter elements of Matrix B:\n");
    inputMatrix(B, rows2, cols2);

    // Matrix Addition
    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(A, B, result, rows1, cols1);
        printf("\nMatrix Addition Result:\n");
        printMatrix(result, rows1, cols1);
    } else {
        printf("\nAddition not possible. Matrices dimensions must match.\n");
    }

    // Matrix Subtraction
    if (rows1 == rows2 && cols1 == cols2) {
        subtractMatrices(A, B, result, rows1, cols1);
        printf("\nMatrix Subtraction Result:\n");
        printMatrix(result, rows1, cols1);
    } else {
        printf("\nSubtraction not possible. Matrices dimensions must match.\n");
    }

    // Matrix Multiplication
    if (cols1 == rows2) {
        multiplyMatrices(A, B, result, rows1, cols1, cols2);
        printf("\nMatrix Multiplication Result:\n");
        printMatrix(result, rows1, cols2);
    } else {
        printf("\nMultiplication not possible. Columns of A must match rows of B.\n");
    }

    // Transpose of Matrix A
    int transposeA[10][10];
    transposeMatrix(A, transposeA, rows1, cols1);
    printf("\nTranspose of Matrix A:\n");
    printMatrix(transposeA, cols1, rows1);

    // Transpose of Matrix B
    int transposeB[10][10];
    transposeMatrix(B, transposeB, rows2, cols2);
    printf("\nTranspose of Matrix B:\n");
    printMatrix(transposeB, cols2, rows2);

    return 0;
}

// Function to input matrix elements
void inputMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
}

// Function to print a matrix
void printMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%4d", matrix[i][j]);
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
}

// Function to subtract two matrices
void subtractMatrices(int A[10][10], int B[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] - B[i][j];
}

// Function to multiply two matrices
void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }
}

// Function to find transpose of a matrix
void transposeMatrix(int matrix[10][10], int transpose[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
}
