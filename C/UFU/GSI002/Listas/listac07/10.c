#include <stdio.h>
#include <string.h>
#include <math.h>

//10

int maior(int x, int y);

int main(){

    int x,y;

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira o valor de y: ");
    scanf("%d", &y);

    printf("O maior valor eh: %d\n", maior(x,y));

    return 0;
}

int maior(int x, int y){

    if(x > y){
        return x;
    }else if (y > x){
        return y;
    }else{
        return 1;
    }

    return 0;
}
