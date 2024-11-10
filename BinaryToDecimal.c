#include <stdio.h>
#include <math.h>

// Function to check if the input is a valid binary number
int isValidBinary(unsigned int binary) {
    while (binary != 0) {
        unsigned int digit = binary % 10;
        if (digit != 0 && digit != 1) {
            return 0; // Invalid binary digit found
        }
        binary = binary / 10;
    }
    return 1; // Valid binary number
}

// Function to convert binary to decimal
int binaryToDecimal(unsigned int binary) {
    unsigned int decimal = 0, i = 0;
    unsigned int temp = binary;

    while (temp != 0) {
        decimal = decimal + (temp % 10) * pow(2, i);
        temp = temp / 10;
        i++;
    }

    return decimal;
}

int main() {
    unsigned int binary, decimal;

    printf("Enter a binary number: ");
    scanf("%u", &binary);

    // Check if the input is a valid binary number
    if (!isValidBinary(binary)) {
        printf("Error: Invalid binary input. Please enter only 0s and 1s.\n");
        return -1; // Exit the program with an error code
    }

    // Convert binary to decimal
    decimal = binaryToDecimal(binary);

    printf("The decimal representation is: %u\n", decimal);

    return 0;
}