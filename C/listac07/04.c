#include <stdio.h>
#include <string.h>
#include <math.h>

//4

void quadrado_perfeito(float x);

int main(){

    float x;
    printf("Insira x: ");
    scanf("%f", &x);

    quadrado_perfeito(x);

    return 0;
}

void quadrado_perfeito(float x){

    if((int)sqrt(x) * (int)sqrt(x) == x){
        printf("Quadrado perfeito\n");
    }else{
        printf("Nao eh um quadrado perfeito\n");
    }

}

