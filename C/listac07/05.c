#include <stdio.h>
#include <string.h>
#include <math.h>

//5


float volume_esfera(float x);

#define pi 3.141592

int main(){

    float r;
    printf("Insira o raio(r): ");
    scanf("%f", &r);

    float vol = volume_esfera(r);

    printf("Volume da esfera: %f\n", vol);

    return 0;
}

float volume_esfera(float r){

    return (4/3*pi*pow(r,3));

}
