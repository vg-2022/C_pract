#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to print its table : ");
    scanf("%d",&n);
    printf("\ntable of %d is :",n);
    for (int i=0;i<10;i++){
        printf("\n%d X %d = %d",n,i+1,n*(i+1));
    }
    return 0;
}