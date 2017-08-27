#include <stdio.h>
#include <string.h>
#include <math.h>

//11

float media(float notas[3], char type);

int main(){

    int i;
    float notas[3];

    for(i=0; i<3; i++){
        printf("Insira a nota %d: ",i);
        scanf("%f", &notas[i]);        
    }
    printf("Insira 'P' se deseja media ponderada ou 'A' para media aritmetica: ");
    
    setbuf(stdin,NULL);
    char tipo;
    scanf("%c", &tipo);

    if(tipo == 'p' || tipo == 'P'){
        printf("A media ponderada: %.2f\n", media(notas, tipo));
    }else if(tipo == 'A' || tipo == 'a'){
        printf("A media aritmetica: %.2f\n", media(notas,tipo));
    }



    return 0;
}

float media(float notas[3], char type){

    if(type == 'p' || type == 'P'){ // Media aritmetica
        return (notas[0]*5 + notas[1]*3 + notas[2]*2)/3;
    }else if(type == 'a' || type == 'A'){
        return (notas[0]+notas[1]+notas[2])/3;
    }

    return 1;
}

