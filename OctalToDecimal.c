#include <stdio.h>
#include <math.h>

// Function to check if the input is a valid octal number
int isValidOctal(int octal) {
    while (octal != 0) {
        int digit = octal % 10;
        if (digit < 0 || digit > 7) {
            return 0; // Invalid octal digit found
        }
        octal = octal / 10;
    }
    return 1; // Valid octal number
}

// Function to convert octal to decimal
int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    int temp = octal;

    while (temp != 0) {
        decimal = decimal + (temp % 10) * pow(8, i);
        temp = temp / 10;
        i++;
    }

    return decimal;
}

int main() {
    int octal, decimal;

        printf("Enter an octal number: ");
        scanf("%d", &octal);

        // Check if the input is a valid octal number
        if (isValidOctal(octal)) {
                // Convert octal to decimal
            decimal = octalToDecimal(octal);
            printf("The decimal representation is: %d\n", decimal);
        } else {
            printf("Error: Invalid octal input. Please enter a valid octal number (digits 0-7).\n");
        }
    


    return 0;
}