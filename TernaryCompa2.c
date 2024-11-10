#include <stdio.h>
int main(){
    int a=5,b=6,g;
    g=(a>b)?a:b;
    printf("%d is greater between %d and %d",g,a,b);
    return 0;
}