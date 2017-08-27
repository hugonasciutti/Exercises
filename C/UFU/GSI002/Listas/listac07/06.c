#include <stdio.h>
#include <string.h>
#include <math.h>

//6

int para_segundos(int hora, int minuto);

int main(){

    int hora, minuto;

    printf("Insira a hora: ");
    scanf("%d", &hora);
    
    printf("Insira o minuto: ");
    scanf("%d", &minuto);

    int segundos = para_segundos(hora, minuto);

    printf("O tempo em segundos: %d \n", segundos);

    return 0;
}
int para_segundos(int hora, int minuto){

    return (hora * 60 * 60) + (minuto * 60);
}
