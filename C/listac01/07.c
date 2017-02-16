#include <stdio.h>

/* 7. Leia uma temperatura em graus Fahrenheit e apresente-a em graus Celsius.
	  A fórmula de conversão é: C = 5.0*(F-32.0)/9.0, sendo F a temperatura em Celsius
	  e C a temperatura em Fahrenheit.
 */

int main(){

	float F, C;

	printf("Fahrenheit: ");
	scanf("%f", &F);
	C = 5.0*(F-32.0)/9.0;
	printf("De Fahrenheit para Celsius: %f\n", C);




	return 0;
}