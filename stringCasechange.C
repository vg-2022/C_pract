#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void convertToLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Convert and display results
    char upperStr[100], lowerStr[100], toggleStr[100];
    
    strcpy(upperStr, str);
    strcpy(lowerStr, str);
    strcpy(toggleStr, str);
    
    convertToUpper(upperStr);
    convertToLower(lowerStr);
    toggleCase(toggleStr);
    
    printf("Uppercase: %s\n", upperStr);
    printf("Lowercase: %s\n", lowerStr);
    printf("Toggled case: %s\n", toggleStr);

    return 0;
}