#include <stdio.h>

// Function to find the largest number
int findLargest(int num1, int num2, int num3) {
    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    else if (num3 > largest) {
        largest = num3;
    }
    return largest;
}

// Function to find the smallest number
int findSmallest(int num1, int num2, int num3) {
    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    else if (num3 < smallest) {
        smallest = num3;
    }
    return smallest;
}

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find and display the largest and smallest numbers
    int largest = findLargest(num1, num2, num3);
    int smallest = findSmallest(num1, num2, num3);

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
