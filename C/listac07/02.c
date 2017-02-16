#include <stdio.h>
#include <string.h>
#include <math.h>


int data(int dia, int mes, int ano);

int main(){


    data(17,11,2016);

    return 0;
}

int data(int dia, int mes, int ano){

    if(dia > 31 || dia < 1){
        printf("Data invalida");
        return 1;
    }
    if(mes > 12 || mes < 1){
        printf("Mes invalido");
        return 1;
    }
    if(ano < 0){
        printf("Ano inválido");
        return 1;
    }

    switch(mes){
        case 1:
            printf("%d de Janeiro de %d",dia,ano);
            break;
        case 2:
            printf("%d de Fevereiro de %d",dia,ano);
            break;
        case 3:
            printf("%d de Marco de %d",dia,ano);
            break;
        case 4:
            printf("%d de Abril de %d",dia,ano);
            break;
        case 5:
            printf("%d de Maio de %d",dia,ano);
            break;
        case 6:
            printf("%d de Junho de %d",dia,ano);
            break;
        case 7:
            printf("%d de Julho de %d",dia,ano);
            break;
        case 8:
            printf("%d de Agosto de %d",dia,ano);
            break;
        case 9:
            printf("%d de Setembro de %d",dia,ano);
            break;
        case 10:
            printf("%d de Outubro de %d",dia,ano);
            break;
        case 11:
            printf("%d de Novembro de %d",dia,ano);
            break;
        case 12:
            printf("%d de Dezembro de %d",dia,ano);
            break;
        default:
            printf("Numero de mes inserido invalido");
    }
    return 0;
}