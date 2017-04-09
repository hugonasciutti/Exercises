#include <stdio.h>
#include <string.h>
#include <math.h>

//7

int c_para_f(float celsius);

int main(){

    float celsius;

    printf("Insira o grau em celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = c_para_f(celsius);
    
    printf("%s\n", fahrenheit);

    return 0;

}

int c_para_f(float celsius){

    return celsius * (9.0/5.0);

}
