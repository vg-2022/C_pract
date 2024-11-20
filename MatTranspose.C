#include <stdio.h>

#define MAX_SIZE 10 // Define maximum size for the matrix

// Function to input a matrix
void inputMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to calculate the transpose of the matrix
void transposeMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE], int transposed[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

// Function to display the matrix
void displayMatrix(int rows, int cols, int matrix[MAX_SIZE][MAX_SIZE]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[MAX_SIZE][MAX_SIZE];
    int transposed[MAX_SIZE][MAX_SIZE]; // Array to hold the transposed matrix

    // Input the size of the matrix
    printf("Enter the number of rows and columns of the matrix (max %d): ", MAX_SIZE);
    scanf("%d %d", &rows, &cols);

    // Input the matrix
    inputMatrix(rows, cols, matrix);

    // Display the original matrix
    displayMatrix(rows, cols, matrix);

    // Calculate the transpose of the matrix
    transposeMatrix(rows, cols, matrix, transposed);

    // Display the transposed matrix
    printf("Transposed Matrix:\n");
    displayMatrix(cols, rows, transposed); // Note: rows and cols are swapped for display

    return 0;
}