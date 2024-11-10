#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d, ", t1);
        } 
        else if(i == 2) {
            printf("%d, ", t2);
        } 
        else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            printf("%d, ", nextTerm);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}