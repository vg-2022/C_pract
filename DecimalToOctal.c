#include <stdio.h>

int main() {
    int decimal, octal = 0, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        octal = octal + (decimal % 8) * i;
        decimal = decimal / 8;
        i = i * 10;
    }

    printf("The octal representation is: %d\n", octal);

    return 0;
}