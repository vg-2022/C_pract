#include <stdio.h>
int main(){
    int age;
    printf("Enter age to check if eligible to vote : ");
    scanf("%d",&age);
    if(age<18){
        printf("Underage!!! Not eligible to vote...");
    }
    else{
        printf("Eligible to vote...");

    }
    return 0;
}