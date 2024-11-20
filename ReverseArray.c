#include <stdio.h>
#define n 10

int main(){
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    printf("The given array is : \n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nArray in reverse order is : \n");
    for (int i = n-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    printf("\n"); // add a newline at the end

    return 0;
}