#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    // Declare character arrays to hold the strings
    char str1[100];
    char str2[100];

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    int len1 = stringLength(str1);

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    

    int len2 = stringLength(str2);

    // Compare the lengths of the two strings
    printf("\nComparing lengths of the two strings:\n");
    if (len1 > len2) {
        printf("The first string is longer than the second string.\n");
    } else if (len1 < len2) {
        printf("The second string is longer than the first string.\n");
    } else {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}