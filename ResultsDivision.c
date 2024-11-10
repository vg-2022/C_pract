#include <stdio.h>
int main(){
   int marks[5],total=0,avg;
   printf("Enter the marks of five subjects:\n");
   for (int i =1 ; i <=5 ; i++){
    printf("Enter the marks of subject %d:",i);
    scanf("%d",&marks[i-1]);
    //adding marks
    total += marks[i-1];

   }
   avg = total/5;
   //displaying result
   if (avg >= 60){
    printf("First Division :)");
      }
     else if (avg <60 && avg > 40){
        printf("Second Division :(");
      }
    else{
        printf("Third Division :(");
    }
    
    return 0;
   
}