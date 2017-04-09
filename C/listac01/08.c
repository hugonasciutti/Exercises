#include <stdio.h>

/* 
	8. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A
	   fórmular de conversão é: C = K - 273.15, sendo C a temperatura em Celsius e K a 
	   temperatura em Kelvin.
 */

int main(){

	float C, K;

	printf("Kelvin: ");
	scanf("%f", &K);
	C = K - 273.15;

	printf("Kelvin para Celsius: %f\n", C);






	return 0;
}