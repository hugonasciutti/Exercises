#include <stdio.h>

/* 6. Leia uma temperatura em graus Celsius e apresente-a em graus Fahrenheit.
	  A fórmula de conversão é: F= C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit
	  e C a temperatura em Celsius.
 */

int main(){

	float F, C;

	printf("Celsius: ");
	scanf("%f", &C);
	F = C*(9.0/5.0) + 32.0;
	printf("De Celsius para Fahrenheit: %f\n", F);




	return 0;
}