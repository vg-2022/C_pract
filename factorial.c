#include <stdio.h>

// function to calculate factorial
int factorial(int num) {
    int fact = 1; // initialize fact to 1
    if (num < 0) {
        printf("Factorial of negative number doesn't exist !!!!!");
        return -1; // return an error value
    } else if (num == 0) {
        return 1; // factorial of 0 is 1
    } else {
        while (num > 0) {
            fact *= num; 
            num--;
        }
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    if (result != -1) {
        printf("Factorial of %d is %d\n", num, result);
    }
    return 0;
}