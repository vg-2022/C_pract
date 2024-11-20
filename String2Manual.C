#include <stdio.h>

// function to calculate string length
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// function to copy string
void stringCopy(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string
}

// function to concatenate strings
void stringConcatenate(char destination[], char source[]) {
    // Find the end of the destination string
    int destLength = 0;
    while (destination[destLength] != '\0') {
        destLength++;
    }

    // Copy source string to the end of destination
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }

    // Null-terminate the concatenated string
    destination[destLength + i] = '\0';
}

// function to compare strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0; // Strings are equal
}

int main() {
    // Declare character arrays with fixed size
    char str1[100];
    char str2[100];
    char concatenatedStr[200];

    // Input first string
    printf("Enter the first string: ");
    // Use fgets to read the entire line including spaces
    fgets(str1, sizeof(str1), stdin);
    
    // Remove the newline character if it was read
    int len = stringLength(str1);
    if (len > 0 && str1[len - 1] == '\n') {
        str1[len - 1] = '\0'; // Replace newline with null terminator
    }

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove the newline character if it was read
    len = stringLength(str2);
    if (len > 0 && str2[len - 1] == '\n') {
        str2[len - 1] = '\0'; // Replace newline with null terminator
    }

    // a. Calculate length of strings
    printf("\na. String Length Operations:\n");
    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));

    // b. Copy string
    printf("\nb. String Copy Operation:\n");
    stringCopy(concatenatedStr, str1);
    printf("Copied string: %s\n", concatenatedStr);

    // c. Concatenate strings
    printf("\nc. String Concatenation Operation:\n");
    stringConcatenate(concatenatedStr, str2);
    printf("Concatenated string: %s\n", concatenatedStr);

    // d. Compare strings
    printf("\nd. String Comparison Operation:\n");
    int comparisonResult = stringCompare(str1, str2);
    if (comparisonResult == 0) {
        printf("Strings are equal\n");
    } else if (comparisonResult < 0) {
        printf("First string is lexicographically smaller\n");
    } else {
        printf("First string is lexicographically larger\n");
    }

    return 0;
}