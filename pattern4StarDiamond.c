#include <stdio.h>

int main() {
    int i, j, rows=5, space;

    // upper triangle
    for(i = 1; i <= rows; i++) {
        // print spaces to center the triangle
        for(space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    //lower triangle
    for(i = rows - 1; i >= 1; i--) {
        // print spaces to center the triangle
        for(space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}