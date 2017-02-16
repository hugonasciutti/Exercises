#include <stdio.h>
#include <string.h>
#include <math.h>

//8

int hipotenusa(int a, int b);

int main(){

    int a, b, hip;
    
    printf("Insira o valor de a: ");
    scanf("%d", &a);

    printf("Insira o valor de b: ");
    scanf("%d", &b);

    hip = hipotenusa(a,b);

    printf("Hipotenusa: %d\n", hip);

    return 0;
}

int hipotenusa(int a, int b){
    return sqrt(a*a + b*b);    
}
