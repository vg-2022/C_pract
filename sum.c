#include <stdio.h>

int main(){
    int a, b; //declaring variables
    printf("Enter First number : "); 
    scanf("%d", &a);                     //taking input
    printf("Enter Second number : ");
    scanf("%d", &b);              
    printf("Sum of %d and %d is %d", a, b, a+b);   //printing the result
    return 0;
}