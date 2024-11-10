#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num == 0 || num==1) {
        return 0; // 0 and 1 are not prime numbers
    }
// if num is divisible by any number between 2 and sqrt(num), it's not prime
    for (int i = 2; i <=ceil(sqrt(num)); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; // if num is not divisible by any number between 2 and sqrt(num), it's prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}