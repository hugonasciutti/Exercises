#include <stdio.h>

/* 
	8. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A
	   fórmular de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a 
	   temperatura em Kelvin.
 */

int main(){

	float C, K;

	printf("Celsius: ");
	scanf("%f", &K);
	C = K + 273.15;

	printf("Celsius para Kelvin: %f\n", C);






	return 0;
}