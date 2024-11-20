#include <stdio.h>
#include <string.h>

int main() {
    char str1[100]; // Declare a character array for the first string
    char str2[100] = "Hello"; // Declare a character array for the second string

    // Input for str1
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    // Display the strings
    printf("You entered: %s\n", str1);
    printf("String 2 is: %s\n", str2);

    // Calculate the length of string 1
    int len1 = strlen(str1);
    printf("Length of string 1: %d\n", len1);

    // Copy the content of string 1 into string 2
    strcpy(str2, str1);
    printf("Copied string 1 to string 2: %s\n", str2);

    // Concatenate string 2 after string 1
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Compare the two strings (case-sensitive)
    int cmpResult = strcmp(str1, str2);
    if (cmpResult < 0) {
        printf("String 1 is less than String 2\n");
    } else if (cmpResult > 0) {
        printf("String 1 is greater than String 2\n");
    } else {
        printf("String 1 is equal to String 2\n");
    }

    return 0;
}