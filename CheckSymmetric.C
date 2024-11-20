#include <stdio.h>

#define MAX_SIZE 50 // Define maximum size for the matrix

// Function to input a matrix
void inputMatrix(int n, int matrix[MAX_SIZE][MAX_SIZE]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to check if the matrix is symmetric
int isSymmetric(int n, int matrix[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
}

// Function to display the matrix
void displayMatrix(int n, int matrix[MAX_SIZE][MAX_SIZE]) {
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    // Input the size of the matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    // Input the matrix
    inputMatrix(n, matrix);

    // Display the matrix
    displayMatrix(n, matrix);

    // Check if the matrix is symmetric
    if (isSymmetric(n, matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}