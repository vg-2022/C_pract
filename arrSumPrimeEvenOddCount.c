#include <stdio.h>
#define n 10
int isPrime(int num) {
    if (num <= 1 ) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main(){
    int arr[n]={1,2,3,4,5,6,7,8,9,19};
    int sum = 0 , countE=0 , countO=0, countP=0;

    for (int i=0 ; i<n; i++){
        sum += arr[i];
        if (isPrime(arr[i])) countP++;
        if (arr[i]%2==0) countE++;
        else countO++;
    }
    printf("\nSum of array elements : %d",sum);
    printf("\nNo of Primes : %d",countP);
    printf("\nNo of Even numbers : %d",countE);
    printf("\nNo of Odd numbers : %d",countO);
    return 0;
}