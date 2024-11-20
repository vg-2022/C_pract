#include <stdio.h>
#define n 10

int main(){
    int arr[n] = {34, 54, 67, 86, 47, 88, 79, 60, 45, 10};
    int num;

    printf("Enter number to check if it is in array: ");
    scanf("%d", &num);

        int found = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == num){
                found = 1;
                break;
            }
        }

        if(found){
            printf("The number %d exists in the array.\n", num);
        } else {
            printf("The number %d does not exist in the array.\n", num);
        }

    return 0;
}