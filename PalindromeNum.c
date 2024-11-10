#include <stdio.h>

int main(){
    int num, result = 0, q, remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    q = num; 
    while (q != 0) {
        remainder = q % 10;
        result = result * 10 + remainder; 
        q /= 10;
    }
    if (num == result) {
        printf("The number is Palindrome...\n");
    } else {
        printf("The number is not Palindrome...\n");
    }
    return 0;
}