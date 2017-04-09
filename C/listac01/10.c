#include <stdio.h>

/* 
	10. Leia uma velocidade em km/h (quilômetro por hora) e apresente-a convertida em m/s
	(metros por segundo). A fórmula da conversão é: M = K/3.6, sendo K a velocidade em 
	km/h em M m/s.
 */

int main(){

	float M, K;

	printf("m/h: ");
	scanf("%f", &M);

	K = M * 3.6;

	printf("m/s para km/h: %f\n", K);


	return 0;
}