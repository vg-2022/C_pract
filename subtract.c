#include <stdio.h>
int main(){
    int a,b,df;  //declaring variables
    printf("Enter the first number : ");      
    scanf("%d",&a);                         //taking input 
    printf("Enter second number : ");
    scanf("%d",&b);
    df=a-b;     //storing reult
     
     printf("Result of %d subtracted by %d id %d ",b,a,df);   //printing result


    return 0;

}