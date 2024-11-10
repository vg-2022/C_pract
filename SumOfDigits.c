#include <stdio.h>
int main(){
    int num,sum=0,product=1,remainder;
    
    printf("Enter a number : ");
    scanf("%d",&num);


    while(num!=0){
        remainder = num % 10;
        sum += remainder;
        product *= remainder;
        num /= 10;
    }

    printf("\nSum and product of digits of given numbers are : \n");
    printf("Sum = %d",sum);
    printf("\nProduct = %d",product);

    return 0;
}