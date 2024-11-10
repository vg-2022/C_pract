#include <stdio.h>
int main(){
    float temp,ctemp;
    int ch;
    printf("Enter your choice : ");
    printf("\n1. Celcius to Fahrenheit.");
    printf("\n2. Fahrenheit to Celcius. \n");
    scanf("%d",&ch);
    if(ch==1){
        //C to F
        printf("\nInput temperature in Celcius : ");
        scanf("%f",&temp);
        ctemp=((temp*9)/5)+32;
        printf("\n%0.2f Celcius = %0.2f Fahrenheit",temp,ctemp);
    }
    else if (ch==2)
    {
        //F to C
        printf("\nEnter temperature in Faherenheit : ");
        scanf("%f",&temp);
        ctemp=((temp-32)*5)/9;
        printf("\n%0.2f Fahrenheit = %0.2f Celcius",temp,ctemp);
    }
    else{
        printf("Enter a correct option....");
    }
    return 0;
    
}