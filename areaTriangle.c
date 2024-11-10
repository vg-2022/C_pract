
# include <stdio.h>
#include <math.h>
int main(){
    float a=3.9,b=6,c=7,s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of triangle with sides %0.2f,%0.2f and %0.2f is %0.2f .",a,b,c,area);
    return 0;
}