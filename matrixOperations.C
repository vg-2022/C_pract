#include <stdio.h>

#define MAX_SIZE 20 // Define maximum size for matrices

// Function to input a matrix
void inputMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int rows, int cols, int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int rows1, int cols1, int cols2, int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; // Initialize result element
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2, choice;
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Input dimensions for the first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    
    // Input the first matrix
    printf("Input first matrix:\n");
    inputMatrix(rows1, cols1, mat1);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    
    // Input the second matrix
    printf("Input second matrix:\n");
    inputMatrix(rows2, cols2, mat2);

    // Menu for operations
    do {
        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (rows1 == rows2 && cols1 == cols2) {
                    addMatrices(rows1, cols1, mat1, mat2, result);
                    printf("Result of Addition:\n");
                    displayMatrix(rows1, cols1, result);
                } else {
                    printf("Matrices cannot be added due to incompatible dimensions.\n");
                }
                break;

            case 2:
                if (rows1 == rows2 && cols1 == cols2) {
                    subtractMatrices(rows1, cols1, mat1, mat2, result);
                    printf("Result of Subtraction:\n");
                    displayMatrix(rows1, cols1, result);
                } else {
                    printf("Matrices cannot be subtracted due to incompatible dimensions.\n");
                }
                break;

            case 3:
                if (cols1 == rows2) {
                    multiplyMatrices(rows1, cols1, cols2, mat1, mat2, result);
                    printf("Result of Multiplication:\n");
                    displayMatrix(rows1, cols2, result);
                } else {
                    printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}