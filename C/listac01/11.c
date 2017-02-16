#include <stdio.h>

/*
  11. Leia uma velocidade eme m/s (metros por segundo) e apresente-a convertida em km/h
      (quilômetros por hora). A fórmula de conversão é: K = M * 3.6, sendo K a velidade
      em km/h e M em m/s.
*/

int main(){

	float km=0;
	float ms=0;

	printf("Insira m/s: ");
	scanf("%f",&ms);

	km = ms * 3.6;

	printf("m/s em Km/h eh: %.3f\n", km);


	return 0;
}