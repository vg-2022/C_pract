# include <stdio.h>
# define n 10
int main (){
    int arr[n],max,min;
    printf("Enter the elements of the array ... ");
    for (int i =0 ; i<n; i++){
        scanf("%d",&arr[i]);
    }
    min =  arr[0];
    max = arr[0];
    for (int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Maximum element in the array is %d\n",max);
    printf("Minimum element in the array is %d\n",min);
    return 0;
}