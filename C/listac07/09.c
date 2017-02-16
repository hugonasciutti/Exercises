#include <stdio.h>
#include <string.h>
#include <math.h>

//9

#define pi 3.141592

int volume_cilindro(int r, int h);

int main(){

    int r,h;


    printf("Insira o valor do raio(r): ");
    scanf("%d", &r);

    printf("Insira o valor da altura(h): ");
    scanf("%d", &h);

    printf("O Volume do cilindro eh: %d\n", volume_cilindro(r,h));

    return 0;
}

int volume_cilindro(int r, int h){

    return pi*(r*r)*h;
}
