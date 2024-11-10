#include <stdio.h>

int main(){
    unsigned int decimal, binary[32] = {0}, i = 0;
    printf("Enter a decimal number: ");
    scanf("%u", &decimal);

    // Converting decimal to binary
    while (decimal != 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    // Printing the binary number
    printf("Binary equivalent is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%u", binary[j]);
    }
    printf("\n");

    return 0;
}