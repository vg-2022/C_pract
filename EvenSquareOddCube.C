#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("\nThe number is Even...");
        printf("\nSquare of %d is %d",num,(int)pow(num,2));

    }
    else{
        printf("\nThe number is odd...");
        printf("The cube of %d is %d .",num,(int)pow(num,3));

    }
    return 0;
    
}